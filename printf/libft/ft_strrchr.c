/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:59:40 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/17 15:30:45 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		counter;

	str = (char *)s;
	counter = ft_strlen(str);
	while (str[counter] != (char)c)
	{
		if (counter == 0)
		{
			return (NULL);
		}
		counter--;
	}
	return (&str[counter]);
}

/*int main ()
{
    const char string[] = "Hello dude";

    int a;
    a = 'p';

    char *the;
    
    the = ft_strrchr(string, a);

    printf("string after %c is %s\n", a, the);
    
    return(0);
}*/