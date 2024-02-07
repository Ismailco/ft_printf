/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:48:01 by iscourr           #+#    #+#             */
/*   Updated: 2024/02/07 14:52:11 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexl(unsigned long n)
{
	int		i;
	char	*arr;

	i = 0;
	arr = "0123456789ABCDEF";
	if (n < 16)
	{
		return (ft_putchar(arr[n]));
	}
	else
	{
		i += ft_puthexl(n / 16);
		i += ft_puthexl(n % 16);
	}
	if (i == -1)
		return (-1);
	return (i);
}
