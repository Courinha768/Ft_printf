/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:20:23 by aappleto          #+#    #+#             */
/*   Updated: 2022/01/06 16:20:25 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	pf_putunsignednbr(va_list args)
{
	unsigned int	nbr;
	char			*unsignednbr;
	int				lenght;
	int				i;

	nbr = va_arg(args, unsigned int);
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	lenght = ft_unsignednbrlen(nbr);
	i = 0;
	unsignednbr = (char *)malloc(sizeof(char) * (lenght + 1));
	if (unsignednbr == NULL)
		return (0);
	while (nbr > 0)
	{
		unsignednbr[i++] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	unsignednbr[i] = 0;
	ft_putstrinv_fd(unsignednbr, 1);
	free(unsignednbr);
	return (lenght);
}
