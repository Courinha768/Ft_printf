/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:19:50 by aappleto          #+#    #+#             */
/*   Updated: 2022/01/06 16:19:53 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	reader(char *str, int i, va_list args)
{
	if (str[i + 1] == 'c')
		return (pf_putchar(args));
	if (str[i + 1] == 's')
		return (pf_putstr(args));
	if (str[i + 1] == 'p')
		return (pf_putaddress(args));
	if (str[i + 1] == 'd' || str[i + 1] == 'i')
		return (pf_putnbr(args));
	if (str[i + 1] == 'u')
		return (pf_putunsignednbr(args));
	if (str[i + 1] == 'x' || str[i + 1] == 'X')
		return (pf_puthexnbr(str[i + 1], args));
	return (0);
}

int	ft_printf(char *str, ...)
{
	int				i;
	va_list			args;
	unsigned int	counter;

	i = 0;
	counter = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar_fd(str[i], 1);
		else if (str[i + 1] == '%')
		{
			ft_putchar_fd('%', 1);
			i++;
		}
		else
		{
			counter += reader(str, i, args) - 1;
			i++;
		}
		i++;
		counter += 1;
	}
	return (counter);
}
