/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:06:17 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/16 17:22:18 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *counter)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", counter);
	else
	{
		if (n < 0)
		{
			ft_putchar('-', counter);
			n = n * -1;
		}
		if (n > 9)
		{
			ft_putnbr(n / 10, counter);
		}
		ft_putchar((n % 10) + '0', counter);
	}
}

void	ft_putnbru(unsigned int n, int *counter)
{
	if (n < 0)
	{
		ft_putchar('-', counter);
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, counter);
	}
	ft_putchar((n % 10) + '0', counter);
}

void	ft_putnbr_base(unsigned int n, int *counter, char *base)
{	
	{		
		if (n > 15)
		{
			ft_putnbr_base(n / 16, counter, base);
		}
		ft_putchar(base[(n % 16)], counter);
	}
}

void	ft_putnbr_basep(unsigned long n, int *counter)
{	
	char	*base;

	base = "0123456789abcdef";
	{			
		if (n > 15)
		{
			ft_putnbr_basep(n / 16, counter);
		}
		ft_putchar(base[(n % 16)], counter);
	}
}
