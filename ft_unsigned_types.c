/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_types.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: progerio <progerio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 00:48:03 by progerio          #+#    #+#             */
/*   Updated: 2022/07/13 22:40:56 by progerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_count_unsigned(unsigned int n)
{
	size_t			count;

	count = 1;
	if (n <= 9)
		return (count);
	while (n / 10 > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
