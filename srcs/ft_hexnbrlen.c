/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexnbrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:20:35 by aappleto          #+#    #+#             */
/*   Updated: 2022/01/06 16:20:37 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hexnbrlen(unsigned int nbr)
{
	int	counter;

	counter = 0;
	while (nbr > 0)
	{
		counter += 1;
		nbr = nbr / 16;
	}
	return (counter);
}
