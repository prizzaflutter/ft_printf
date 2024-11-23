/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:50:42 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/23 14:15:57 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_format_base(unsigned long n, int base, char *symbols, int is_unsinged, int is_address, int flag) {
    int count = 0;
    unsigned long num;
    if (base != 10 && base != 16) {
        return 0;
    }
    if (is_unsinged == 0 && base == 10 && n < 0) {
        count += ft_putchar('-');
        n = -n;
    }
    num = (unsigned int) n;
    if(flag == 0)
        {
            count += ft_putstr("0x");
            flag = 1;
        }
        if(is_address == 1)
            num = (unsigned long)n;
    if (num < (unsigned int)base) {
        count += ft_putchar(symbols[num]);
    } else {
        count += ft_format_base(num / base, base, symbols, is_unsinged, is_address, flag);
        count += ft_format_base(num % base, base, symbols, is_unsinged, is_address, flag);
    }
    return count;
}
