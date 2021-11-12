 ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:35:13 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/12 17:27:23 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	main(void)
{

}


int	ft_checku(char c, va_list args, int *counter)
{
	if (c == '%')
		ft_putchar('%', &counter);
	else if (c == 'd') 
		ft_itoa(args, &counter);
	else if (c == 's')
		ft_putstr(args, &counter); 
	else if (c == 'c')
		ft_putchar(args, &counter);
	else if (c == 'p')
		ft
	else if (c == 'u')
		ft
	else if (c == 'x')
		ft
	else if (c == 'X')
		ft
	
}





int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		counter;
	int		i;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i]);
			counter++;
		}
		else if (format[i] == '%')
		{
			i++;
			ft_checku(format[i], args, &counter);
		}
		i++;
	}
	va_end(args);
	return (counter);
}
