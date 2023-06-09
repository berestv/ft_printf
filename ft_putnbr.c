/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-e <bbento-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:11:17 by bbento-e          #+#    #+#             */
/*   Updated: 2022/12/06 16:11:08 by bbento-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	char	aux;
	int		i;

	i = 0;
	if (nb <= -2147483648)
		return (write(1, "-2147483648", 11));
	if (nb < 0 && nb != -2147483648)
	{
		i += ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		i += ft_putnbr(nb / 10);
		i += ft_putnbr(nb % 10);
	}
	if (nb < 10 && nb >= 0)
	{
		aux = nb + 48;
		i += write(1, &aux, 1);
	}
	return (i);
}
