/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_maj.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jralph <jralph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:52:53 by jralph            #+#    #+#             */
/*   Updated: 2022/11/22 10:10:17 by jralph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_maj(unsigned int nbr)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (nbr > 15)
		return (ft_puthexa_maj(nbr / 16) + ft_puthexa_maj(nbr % 16));
	write (1, &hexa[nbr], 1);
	return (1);
}
