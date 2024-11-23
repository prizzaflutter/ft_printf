/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaskour <iaskour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:46:08 by iaskour           #+#    #+#             */
/*   Updated: 2024/11/23 14:21:42 by iaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FT_PRINTF
# define LIB_FT_PRINTF

#include <unistd.h>
int	ft_printf(const char *, ...);
int ft_putchar(char c);
int	ft_format_base(unsigned long n, int base, char *symbols, int is_unsinged, int is_address, int flag);
int ft_putstr(char *str);

#endif
