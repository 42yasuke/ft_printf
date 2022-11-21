/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:16:33 by jralph            #+#    #+#             */
/*   Updated: 2022/11/21 01:44:59 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbru(unsigned int nbr)
{
	char	c;

	if (nbr > 9)
		return (ft_putnbru(nbr / 10) + ft_putnbru(nbr % 10));
	c = nbr + '0';
	write (1, &c, 1);
	return (1);
}
