/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddresse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouskha <mbouskha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 08:52:00 by mbouskha          #+#    #+#             */
/*   Updated: 2025/11/05 08:58:50 by mbouskha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex2(unsigned long n)
{
	char	*arr;
	char	buf[17];
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
		len += ft_putchar(buf[i]);
		i--;
	}
	return (len);
}

int	ft_putaddresse(unsigned long n)
{
	int		len;

	len = 0;
	if ((void *)n == NULL)
		return (ft_putstr("(nil)"));
	len += ft_putstr("0x");
	len += ft_puthex2(n);
	return (len);
}
