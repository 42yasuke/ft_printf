/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 23:14:40 by jose              #+#    #+#             */
/*   Updated: 2022/11/21 01:42:21 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_printf(const char *str, ...);
void	ft_goodc(va_list args, char c, int *cmp);
int		ft_putptr(void *p);
int		ft_putnbr(int nbr);
int		ft_putnbru(unsigned int nbr);
int		ft_puthexa_min(unsigned int nbr);
int		ft_puthexa_maj(unsigned int nbr);

#endif
