/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:19:20 by aappleto          #+#    #+#             */
/*   Updated: 2022/01/06 16:19:24 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_nbrlen(int nbr)
{
	int	counter;

	counter = 0;
	if (nbr == -2147483648)
		return (11);
	if (nbr < 0)
	{
		nbr *= -1;
		counter++;
	}
	while (nbr > 0)
	{
		counter++;
		nbr = nbr / 10;
	}
	return (counter);
}
