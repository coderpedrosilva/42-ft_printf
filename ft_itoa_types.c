/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_types.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: progerio <progerio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 00:38:25 by progerio          #+#    #+#             */
/*   Updated: 2022/07/13 22:40:32 by progerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_nbrlen(int n);
char	*ft_int_converter(int n, int size);
size_t	ft_count_unsigned(unsigned int n);

int	ft_itoa(int n)
{
	char		*str;
	size_t		size;

	size = ft_nbrlen(n);
	str = ft_int_converter(n, size);
	size = ft_putstr(str);
	free(str);
	return ((int)size);
}

int	ft_itoa_base(unsigned long n, unsigned int base, char c)
{
	char			*res;
	int				i;
	unsigned long	num;

	i = 0;
	num = n;
	while (num >= base)
	{
		num = num / base;
		i++;
	}
	res = malloc(i + 2);
	if (!res)
		return (0);
	res[i + 1] = '\0';
	while (i >= 0)
	{
		num = n % base;
		res[i] = aux_hex(num, c);
		n = n / base;
		i--;
	}
	i = ft_putstr(res);
	free(res);
	return (i);
}

int	ft_unsigned_itoa(unsigned int n)
{
	char			*res;
	unsigned int	n_value;
	unsigned int	char_n;
	size_t			size;

	size = ft_count_unsigned(n);
	res = malloc(size + 1);
	if (!res)
		return (0);
	res[size] = '\0';
	n_value = n;
	while (size)
	{
		char_n = n_value;
		while (char_n > 9)
			char_n = char_n % 10;
		res[--size] = char_n + 48;
		n_value = n_value / 10;
	}
	size = ft_putstr(res);
	free(res);
	return ((int)size);
}
