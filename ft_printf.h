/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jralph <jralph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 23:14:40 by jose              #+#    #+#             */
/*   Updated: 2022/11/22 12:17:31 by jralph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_printf(const char *str, ...);
void	ft_goodc(va_list args, char c, int *cmp);
int		ft_putptr(void *p, int val_is_d);
void	ft_putnbr(int nbr, int *cmp);
int		ft_putnbru(unsigned int nbr);
int		ft_puthexa_min(unsigned int nbr);
int		ft_puthexa_maj(unsigned int nbr);

#endif
