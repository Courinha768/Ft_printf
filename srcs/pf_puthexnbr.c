/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:20:14 by aappleto          #+#    #+#             */
/*   Updated: 2022/01/06 16:20:17 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	pf_puthexnbr(char type, va_list args)
{
	unsigned int	nbr;
	char			*hex_code;
	int				lenght;

	nbr = va_arg(args, unsigned int);
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	lenght = ft_hexnbrlen(nbr);
	hex_code = set_hex_code(type);
	print_hex(lenght, nbr, hex_code);
	return (lenght);
}

char	*set_hex_code(char type)
{
	if (type == 'x')
		return ("0123456789abcdef");
	else
		return ("0123456789ABCDEF");
}

void	print_hex(int lenght, unsigned int nbr, char *hex_code)
{
	char	*hexnbr;
	int		i;

	i = 0;
	hexnbr = (char *)malloc(sizeof(char) * (lenght + 1));
	if (hexnbr == NULL)
		return ;
	while (nbr > 0)
	{
		hexnbr[i++] = hex_code[nbr % 16];
		nbr = nbr / 16;
	}
	hexnbr[i] = 0;
	ft_putstrinv_fd(hexnbr, 1);
	free(hexnbr);
}
