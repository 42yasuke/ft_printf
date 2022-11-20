/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_maj.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jralph <jralph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:52:53 by jralph            #+#    #+#             */
/*   Updated: 2022/11/20 23:59:33 by jralph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthexa_maj(unsigned int nbr)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (nbr > 15)
		return (ft_putnbru(nbr / 16) + ft_putnbru(nbr % 16));
	c = nbr + '0';
	write (1, &hexa[nbr], 1);
	return (1);
}
