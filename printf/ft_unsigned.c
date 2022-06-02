/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:07:28 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/21 18:02:47 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_num(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_len_num(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
	{
		return (0);
	}
	num[len] = '\0';
	while (n != 0)
	{
		num[len -1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

int	ft_print_uns(unsigned int n)
{
	int		length;
	char	*num;

	length = 0;
	if (n == 0)
	{
		length += write(1, "0", 1);
	}
	else
	{
		num = ft_uitoa(n);
		length += ft_print_str(num);
		free(num);
	}
	return (length);
}
