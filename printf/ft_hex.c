/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:18:03 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/23 19:37:34 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_hex(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_hex(unsigned int value, const char format)
{
	if (value >= 16)
	{
		ft_hex(value / 16, format);
		ft_hex(value % 16, format);
	}
	else
	{
		if (value <= 9)
		{
			ft_putchar_fd(value + '0', 1);
		}
		else
		{
			if (format == 'x')
			{
				ft_putchar_fd((value - 10 + 'a'), 1);
			}
			if (format == 'X')
			{
				ft_putchar_fd((value - 10 + 'A'), 1);
			}
		}
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
	{
		return (write(1, "0", 1));
	}
	else
	{
		ft_hex(num, format);
	}
	return (ft_len_hex(num));
}
