/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:57:35 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/21 18:03:01 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_str(char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		write(1, &s[count], 1);
		count++;
	}
}

int	ft_print_str(char *s)
{
	int	counter;

	counter = 0;
	if (s == NULL)
	{
		ft_put_str("(null)");
		return (6);
	}
	while (s[counter] != '\0')
	{
		write(1, &s[counter], 1);
		counter++;
	}
	return (counter);
}

int	ft_print_num(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_print_str(num);
	free(num);
	return (len);
}

int	ft_percent(void)
{
	write(1, "%", 1);
	return (1);
}
