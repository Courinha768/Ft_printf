/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:20:49 by aappleto          #+#    #+#             */
/*   Updated: 2022/01/06 16:20:51 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	pf_putaddress(va_list args)
{
	unsigned int		*n;
	unsigned long long	nbr;

	nbr = va_arg(args, unsigned long long);
	write(1, "0x", 2);
	if (nbr == 0)
		write(1, "0", 1);
	else
	{
		n = (unsigned int *)malloc(sizeof(int) * (ft_addlen(nbr) + 1));
		if (!n)
			return (0);
		print_add(nbr, n);
		free(n);
	}
	return (ft_addlen(nbr) + 2);
}

void	print_add(unsigned long long nbr, unsigned int *n)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (nbr > 0)
	{
		n[i++] = nbr % 16;
		nbr = nbr / 16;
	}
	while (--i >= 0)
		ft_putchar_fd(hex[n[i]], 1);
}

int	ft_addlen(unsigned long long nbr)
{
	int	counter;

	counter = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		counter += 1;
		nbr = nbr / 16;
	}
	return (counter);
}
