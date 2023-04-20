/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-e <bbento-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:58:43 by bbento-e          #+#    #+#             */
/*   Updated: 2022/12/06 16:04:50 by bbento-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putnbr(long nb);
int		ft_putstr(char *str);
char	spec_chr(const char str);
int		ft_putunsg(unsigned int n);
int		ft_printf(const char *str, ...);
int		ft_printaddr(unsigned long addr);
int		ft_puthex(unsigned long hex, char c);
void	ft_print(va_list va, char c, int *ri);

#endif
