/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:19:42 by aappleto          #+#    #+#             */
/*   Updated: 2022/01/06 16:19:44 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	pf_putstr(va_list args)
{
	char	*str;
	int		i;

	str = va_arg(args, char *);
	i = 0;
	if (str)
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	else
	{
		write(1, "(null)", 6);
		return (6);
	}
	return (ft_strlen(str));
}
