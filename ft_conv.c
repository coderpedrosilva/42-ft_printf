/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: progerio <progerio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 00:37:18 by progerio          #+#    #+#             */
/*   Updated: 2022/07/13 22:40:26 by progerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	aux_hex(int num, char c)
{
	if (num >= 10)
	{
		if (c == 'l')
			return (num - 10 + 'a');
		else
			return (num - 10 + 'A');
	}
	else
		return (num + '0');
}

char	*ft_int_converter(int n, int size)
{
	char			*res;
	long int		n_value;
	unsigned int	char_n;

	res = malloc(size + 1);
	if (!res)
		return (0);
	res[size] = '\0';
	n_value = n;
	if (n_value < 0)
		n_value *= -1;
	while (size)
	{
		char_n = n_value;
		while (char_n > 9)
			char_n = char_n % 10;
		res[--size] = char_n + 48;
		n_value = n_value / 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

int	ft_ptr_conv(unsigned long address)
{
	int	i;

	i = 0;
	if (!address)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		write(1, "0x", 2);
		i = ft_itoa_base(address, 16, 'l') + 2;
	}
	return (i);
}
