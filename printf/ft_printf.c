/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:30:47 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/25 17:14:04 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchr(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_check_formats(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length += ft_putchr(va_arg(args, int));
	else if (format == 's')
		length += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		length += ft_print_num(va_arg(args, int));
	else if (format == 'u')
		length += ft_print_uns(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		length += ft_percent();
	return (length);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		length;

	va_start(args, format);
	i = 0;
	length = 0;
	if (!format)
		return (0);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			length += ft_check_formats(args, format[i]);
		}
		else
			length += ft_putchr(format[i]);
			i++;
	}
	va_end(args);
	return (length);
}
