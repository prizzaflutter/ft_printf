/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:50:42 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/23 16:22:45 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned int n, char *symbols)
{
	int	count;

	count = 0;
	if (n < 16)
		count += ft_putchar(symbols[n]);
	else
	{
		count += ft_printf_hex(n / 16, symbols);
		count += ft_printf_hex(n % 16, symbols);
	}
	return (count);
}
