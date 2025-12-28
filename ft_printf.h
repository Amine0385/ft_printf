/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouskha <mbouskha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 08:46:29 by mbouskha          #+#    #+#             */
/*   Updated: 2025/11/05 13:17:06 by mbouskha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_putunsigned(int n);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_puthex(unsigned int n, char c);
int		ft_putchar(char c);
int		ft_putaddresse(unsigned long n);
int		ft_printf(const char *ptr, ...);
size_t	ft_strlen(const char *str);
#endif
