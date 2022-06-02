/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:48:19 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/24 19:11:34 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_check_formats(va_list args, const char format);
int		ft_putchr(int c);
void	ft_put_str(char *s);
int		ft_print_str(char *s);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_num(int n);
int		ft_print_uns(unsigned int n);
int		ft_print_hex(unsigned int num, const char format);
int		ft_percent(void);
void	ft_pointer(unsigned long int num);
int		ft_pt_len(unsigned long int addi);
char	*ft_uitoa(unsigned int n);
int		ft_len_num(unsigned int n);
int		ft_len_hex(unsigned int num);
void	ft_hex(unsigned int value, const char format);
int		ft_percent(void);

#endif
