/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jralph <jralph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:22:23 by jose              #+#    #+#             */
/*   Updated: 2022/11/22 10:10:02 by jralph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int	i;
	int	cmp;
	va_list	args;

	i = 0;
	cmp = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
			cmp += ft_putchar(str[i]);
			else
			{
				i++;
				ft_goodc(args, str[i], &cmp);
			}
		i++;
	}
	return (cmp);
}
