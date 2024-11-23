/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:18:21 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/23 14:19:31 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

static int	print_format(char format, va_list ap)
{
	int num;

	num = 0;
	if (format == '%')
		num += ft_putchar('%');
	else if (format == 'c')
		num += ft_putchar(va_arg(ap,int));
	else if (format == 's')
		num += ft_putstr(va_arg(ap, char *));
	else if (format == 'i' || format == 'd')
		num += ft_format_base(va_arg(ap,int), 10, "0123456789", 0, 0 , 1);
	else if (format == 'u')
		num += ft_format_base(va_arg(ap,int), 10, "0123456789", 1, 0, 1);
	else if (format == 'x')
		num += ft_format_base(va_arg(ap, int), 16, "0123456789abcdef", 0, 0, 1);
	else if (format == 'X')
		num += ft_format_base(va_arg(ap, int), 16, "0123456789ABCDEF", 0, 0, 1);
	else if (format == 'p')
		num += ft_format_base((unsigned long)va_arg(ap, void *), 16, "0123456789abcdef", 1, 1, 0);
	else 
		return (0);
	return (num); 
}

int  ft_printf(const char *format, ...)
{
	va_list ap; 
	int counter; 

	counter = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%' && *format + 1)
			counter += print_format(*(++format), ap);
		else 
			counter += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (counter);
}