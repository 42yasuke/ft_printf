/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jralph <jralph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:44:03 by jose              #+#    #+#             */
/*   Updated: 2022/11/22 12:15:28 by jralph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *cmp)
{
	char	*dec;
	long	nb;

	nb = (long)nbr;
	dec = "0123456789";
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		*cmp = *cmp + 1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, cmp);
		ft_putnbr(nb % 10, cmp);
	}
	else
	{	
		write (1, &dec[nb], 1);
		*cmp = *cmp + 1;
	}
}
