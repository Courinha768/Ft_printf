/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:20:56 by aappleto          #+#    #+#             */
/*   Updated: 2022/01/06 16:20:58 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	pf_putnbr(va_list args)
{
	int				nbr;

	nbr = va_arg(args, int);
	ft_putnbr_fd(nbr, 1);
	if (nbr == 0)
		return (1);
	return (ft_nbrlen(nbr));
}

// int	main(void)
// {
// 	t_flag flag;

// 	flag.flag = 4;
// 	flag.flag_values[0] = 6;
// 	flag.flag_values[1] = 5;
// 	flag.type = 'x';
// 	ft_putchar_fd('[', 1);
// 	pf_putnbr(flag, 8000);
// 	ft_putchar_fd(']', 1);
// }
