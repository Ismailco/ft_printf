/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 06:40:42 by iscourr           #+#    #+#             */
/*   Updated: 2024/02/09 10:43:21 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddr(unsigned long n)
{
	int		i;
	char	*arr;

	i = 0;
	arr = "0123456789abcdef";
	i += ft_putstr("0x");
	i += ft_puthexa(n);
	return (i);
}
