/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: progerio <progerio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 00:50:53 by progerio          #+#    #+#             */
/*   Updated: 2022/07/13 22:40:52 by progerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_itoa(int n);
int	ft_unsigned_itoa(unsigned int n);
int	ft_itoa_base(unsigned long n, unsigned int base, char c);
int	ft_ptr_conv(unsigned long address);
int	aux_hex(int num, char c);

#endif
