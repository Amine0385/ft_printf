/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouskha <mbouskha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:07:54 by mbouskha          #+#    #+#             */
/*   Updated: 2025/11/04 18:11:25 by mbouskha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char c)
{
	char	*arr;
	char	buf[10];
	int		i;
	int		len;

	i = 0;
	len = 0;
	arr = "0123456789abcdef";
	if (n == 0)
		len += ft_putchar('0');
	while (n > 0)
	{
		buf[i] = arr[n % 16];
		n /= 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (c == 'X' && (buf[i] >= 'a' && buf[i] <= 'f'))
			buf[i] -= 32;
		len += ft_putchar(buf[i]);
		i--;
	}
	return (len);
}
