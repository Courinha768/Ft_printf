/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignednbrlen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:20:42 by aappleto          #+#    #+#             */
/*   Updated: 2022/01/06 16:20:44 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_unsignednbrlen(unsigned int nbr)
{
	int	counter;

	counter = 0;
	while (nbr > 0)
	{
		counter += 1;
		nbr = nbr / 10;
	}
	return (counter);
}
