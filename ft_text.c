/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:13:22 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/16 17:09:16 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int i, int *counter)
{
	char	c;

	c = i;
	write(1, &c, 1);
	*counter = *counter + 1;
}

void	ft_putstr(char *str, int *counter)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		*counter = *counter + 6;
	}
	else
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
			*counter = *counter + 1;
		}
	}
}
