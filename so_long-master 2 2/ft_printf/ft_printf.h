/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <nkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:26:39 by nkorkmaz          #+#    #+#             */
/*   Updated: 2023/08/18 14:26:41 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

# ifndef LOWER_BASE
#  define LOWER_BASE "0123456789abcdef"
# endif

# ifndef UPPER_BASE
#  define UPPER_BASE "0123456789ABCDEF"
# endif

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_printf(const char *str, ...);
int	ft_putnbr(long double number, int base, int is_upper);
int	ft_pointer(long double number, int base, int is_upper);
int	ft_control(char c, va_list variable);

#endif