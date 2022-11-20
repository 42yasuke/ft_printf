/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:44:03 by jose              #+#    #+#             */
/*   Updated: 2022/11/20 17:01:12 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int nbr)
{
	char	c;

	if (nbr < 0)
	{
		if (nbr == INT_MIN)
		{
			write(1, "-2147483648", 11);
			return (11);
		}
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
		return (ft_putnbr(nbr / 10) + ft_putnbr(nbr % 10));
	c += nbr + '0';
	write (1, &c, 1);
	return (1);
}
