/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_goodc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jralph <jralph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:27:23 by jose              #+#    #+#             */
/*   Updated: 2022/11/20 23:47:20 by jralph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.a"

void	ft_goodc(va_list args, char c, int *cmp)
{
	if (c == 'c')
		*cmp += ft_putchar(va_arg(args, char));
	else if (c == 's')
		*cmp += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		*cmp += ft_putptr(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		*cmp += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		*cmp += ft_putnbru(va_arg(args, unsigned int));
	else if (c == 'x')
		*cmp += ft_puthexa_min(va_arg(args, unsigned int));
	else if (c == 'X')
		*cmp += ft_puthexa_maj(va_arg(args, unsigned int));
	else if (c == '%')
		*cmp += ft_putchar('%');
}
