/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:54:43 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/16 17:25:08 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putnbr(int n, int *counter);
void	ft_putnbru(unsigned int n, int *counter);
void	ft_putchar(int i, int *counter);
void	ft_putstr(char *str, int *counter);
int		ft_printf(const char *format, ...);
void	ft_putnbr_base(unsigned int n, int *counter, char *base);
void	ft_putnbr_basep(unsigned long n, int *counter);
#endif 
