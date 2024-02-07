/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:48:01 by iscourr           #+#    #+#             */
/*   Updated: 2024/02/07 14:51:01 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n)
{
	int		i;
	char	arr[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

	i = 0;
	if (n < 16)
	{
		return (ft_putchar(arr[n]));
	}
	else
	{
		i += ft_puthexa(n / 16);
		i += ft_puthexa(n % 16);
	}
	if (i == -1)
		return (-1);
	return (i);
}
