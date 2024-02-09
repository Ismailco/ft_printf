/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:48:01 by iscourr           #+#    #+#             */
/*   Updated: 2024/02/09 10:57:24 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n)
{
	int		i;
	char	*arr;

	i = 0;
	arr = "0123456789abcdef";
	if (n < 16)
		i += ft_putchar(arr[n]);
	else
	{
		i += ft_puthexa(n / 16);
		i += ft_puthexa(n % 16);
	}
	return (i);
}
