/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscourr <i_courr@hotmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:44:47 by iscourr           #+#    #+#             */
/*   Updated: 2024/02/10 10:12:22 by iscourr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_input_cecker(const char **format, va_list args)
{
	int		j;

	j = 0;
	(void)(*(*format)++);
	if (write(1, 0, 0) == -1)
		return (-1);
	if (**format == 'c')
		j += ft_putchar(va_arg(args, int));
	else if (**format == 's')
		j += ft_putstr(va_arg(args, char *));
	else if (**format == 'd' || **format == 'i')
		j += ft_putnbr(va_arg(args, long));
	else if (**format == 'u')
		j += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (**format == 'x')
		j += ft_puthexa(va_arg(args, unsigned int));
	else if (**format == 'X')
		j += ft_puthexl(va_arg(args, unsigned int));
	else if (**format == 'p')
		j += ft_putaddr((unsigned long) va_arg(args, void *));
	else
		j += ft_putchar(**format);
	return (j);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		j;

	va_start(args, format);
	j = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			j += ft_input_cecker(&format, args);
			if (j == -1)
				return (-1);
		}
		else
		{
			j += ft_putchar(*format);
			if (j == -1)
				return (-1);
		}
		format++;
	}
	va_end(args);
	return (j);
}
