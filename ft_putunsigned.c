/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouskha <mbouskha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:52:00 by mbouskha          #+#    #+#             */
/*   Updated: 2025/11/04 18:04:13 by mbouskha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(int n)
{
	unsigned int	nb;
	char			c;
	int				len;

	len = 0;
	nb = (unsigned int)n;
	if (nb >= 10)
		len += ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	len += ft_putchar(c);
	return (len);
}
