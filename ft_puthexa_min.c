/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_min.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:56:56 by jralph            #+#    #+#             */
/*   Updated: 2022/11/21 01:39:59 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthexa_min(unsigned int nbr)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nbr > 15)
		return (ft_putnbru(nbr / 16) + ft_putnbru(nbr % 16));
	write (1, &hexa[nbr], 1);
	return (1);
}
