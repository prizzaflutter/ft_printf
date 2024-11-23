/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:43:19 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/23 16:24:46 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_uns(unsigned int n)
{
	int				count;
	unsigned int	num;

	num = (unsigned int)n;
	count = 0;
	if (num < 10)
		count += ft_putchar(num + '0');
	else
	{
		count += ft_printf_uns(num / 10);
		count += ft_printf_uns(num % 10);
	}
	return (count);
}
