/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:43:19 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/25 12:09:02 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_uns(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 10)
		count += ft_putchar(n + '0');
	else
	{
		count += ft_printf_uns(n / 10);
		count += ft_printf_uns(n % 10);
	}
	return (count);
}
