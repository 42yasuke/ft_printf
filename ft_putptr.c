/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jralph <jralph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 02:37:35 by jose              #+#    #+#             */
/*   Updated: 2022/11/22 10:10:32 by jralph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p, int val_is_d)
{
	unsigned long		pn;
	char				*hexa;
	static int			is_done;
	static int			is_add;

	hexa = "0123456789abcdef";
	pn = (unsigned long)p;
	is_done = val_is_d;
	if (!is_done)
	{
		ft_putstr("0x");
		is_add = 0;
	}
	if (pn > 15)
		return (ft_putptr((void *)(pn / 16), 1) + \
		ft_putptr((void *)(pn % 16), 1));
	write (1, &hexa[pn], 1);
	if (!is_add)
	{
		is_add++;
		return (3);
	}
	return (1);
}
