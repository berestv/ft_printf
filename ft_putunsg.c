/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-e <bbento-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:58:34 by bbento-e          #+#    #+#             */
/*   Updated: 2022/12/06 16:13:00 by bbento-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsg(unsigned int n)
{
	int		i;

	i = 0;
	if ((int)n >= 0 && n <= 9)
		i += ft_putchar(n + 48);
	else if (n > 9)
	{
		i += ft_putunsg(n / 10);
		i += ft_putunsg(n % 10);
	}
	return (i);
}
