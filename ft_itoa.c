/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:13:22 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/12 17:27:25 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr(int n, int *counter)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", &counter);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', &counter);
			n = n * -1;
		}
		if (n >= 9)
		{
			ft_putnbr_fd(n / 10, &counter);
		}
		ft_putchar_fd((n % 10) + '0', &counter);
	}
}

void	ft_putchar(char c, &counter)
{
	write(1, &c, 1);
	*counter = *counter + 1;
}

void	ft_putstr(char *str, int *counter)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
		*counter = *counter + 1;
	}
}
