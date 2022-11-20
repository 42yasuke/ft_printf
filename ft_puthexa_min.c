/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_min.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jralph <jralph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:56:56 by jralph            #+#    #+#             */
/*   Updated: 2022/11/20 23:59:21 by jralph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthexa_min(unsigned int nbr)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nbr > 15)
		return (ft_putnbru(nbr / 16) + ft_putnbru(nbr % 16));
	c = nbr + '0';
	write (1, &hexa[nbr], 1);
	return (1);
}
