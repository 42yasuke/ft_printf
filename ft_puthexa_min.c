/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_min.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 02:37:35 by jose              #+#    #+#             */
/*   Updated: 2022/11/20 10:58:21 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putptr(void *p)
{
	char	*hexa;
	long	pn;
	static int	is_done;

	hexa = "0123456789abcdef";
	pn = (long)p;
	if(!is_done)
	{
		write(1, "0x", 2);
		is_done++;
	}
	if (pn > 15)
		return (ft_puthexa_min(pn / 16) + ft_puthexa_min(pn % 16));
	write (1, &hexa[pn], 1);
	return (1);
}
