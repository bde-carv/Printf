/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:20:09 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/24 19:11:22 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pt_len(unsigned long int addi)
{
	int	length;

	length = 0;
	while (addi != 0)
	{
		length++;
		addi = addi / 16;
	}
	return (length);
}

void	ft_pointer(unsigned long int num)
{
	if (num >= 16)
	{
		ft_pointer(num / 16);
		ft_pointer(num % 16);
	}
	else
	{
		if (num <= 9)
		{
			ft_putchar_fd((num + '0'), 1);
		}
		else
		{
			ft_putchar_fd((num - 10 + 'a'), 1);
		}
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (ptr == 0)
	{
		len += write(1, "0", 1);
	}
	else
	{
		ft_pointer(ptr);
		len += ft_pt_len(ptr);
	}
	return (len);
}
