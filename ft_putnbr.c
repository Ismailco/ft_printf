/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:50:56 by iscourr           #+#    #+#             */
/*   Updated: 2024/02/09 10:53:08 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			return (write(1, "-2147483648", 11));
		else
		{
			i += ft_putchar('-');
			n *= -1;
		}
	}
	if (n < 10)
		i += ft_putchar(n + '0');
	else
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	return (i);
}
