/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouskha <mbouskha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 08:36:57 by mbouskha          #+#    #+#             */
/*   Updated: 2025/11/07 09:43:20 by mbouskha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	help(char c, va_list lst)
{
	int		len;

	len = 0;
	if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(lst, int));
	else if (c == 's')
		len += ft_putstr(va_arg(lst, char *));
	else if (c == 'c')
		len += ft_putchar(va_arg(lst, int));
	else if (c == '%')
		len += ft_putchar('%');
	else if (c == 'x' || c == 'X')
		len += ft_puthex(va_arg(lst, int), c);
	else if (c == 'u')
		len += ft_putunsigned(va_arg(lst, int));
	else if (c == 'p')
		len += ft_putaddresse(va_arg(lst, unsigned long));
	else
	{
		len += ft_putchar('%');
		len += ft_putchar(c);
	}
	return (len);
}

int	ft_printf(const char *ptr, ...)
{
	int		i;
	int		len;
	va_list	lst;

	if (!ptr || (ptr[0] == '%' && !ptr[1]))
		return (-1);
	va_start(lst, ptr);
	i = 0;
	len = 0;
	while (ptr[i])
	{
		if (ptr[i] == '%' && ptr[i + 1])
		{
			i++;
			len += help(ptr[i], lst);
		}
		else if (ptr[i] != '%')
			len += write(1, &ptr[i], 1);
		i++;
	}
	va_end(lst);
	return (len);
}
