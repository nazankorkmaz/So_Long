/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <nkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:26:27 by nkorkmaz          #+#    #+#             */
/*   Updated: 2023/08/18 14:26:30 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!(str))
	{
		count += write(1, "(null)", 6);
		return (count);
	}
	while (*str)
	{
		write(1, str, 1);
		count++;
		str++;
	}
	return (count);
}

int	ft_putnbr(long double number, int base, int is_upper)
{
	int	count;

	count = 1;
	if (number < 0)
	{
		count++;
		number = -number;
		write(1, "-", 1);
	}
	if (number >= base)
		count += ft_putnbr(number / base, base, is_upper);
	if (is_upper)
		write(1, &UPPER_BASE[(unsigned long)number % base], 1);
	else
		write(1, &LOWER_BASE[(unsigned long)number % base], 1);
	return (count);
}

int	ft_pointer(long double number, int base, int is_upper)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_putnbr(number, base, is_upper);
	return (count);
}
