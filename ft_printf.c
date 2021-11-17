/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:35:13 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/17 12:12:48 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_checku(char c, va_list args, int *counter)
{
	if (c == '%')
		ft_putchar('%', counter);
	else if (c == 'd')
		ft_putnbr(va_arg(args, int), counter);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), counter);
	else if (c == 'c')
		ft_putchar(va_arg(args, int), counter);
	else if (c == 'i')
		ft_putnbr(va_arg(args, int), counter);
	else if (c == 'u')
		ft_putnbru(va_arg(args, unsigned int), counter);
	else if (c == 'p')
	{
		write (1, "0x", 2);
		*counter = *counter + 2;
		ft_putnbr_basep(va_arg(args, unsigned long), counter);
	}
	else if (c == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), counter, "0123456789abcdef");
	else if (c == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), counter, "0123456789ABCDEF");
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		counter;
	int		i;

	i = 0;
	counter = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
			ft_putchar(format[i], &counter);
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

/*int	main(void)
{
	int	i;
	char	v;
	char s[] = "hello";
	char s1[] = "les amis";
	char s2[] = "$a va";
	int	c;
	
	v = 'D';
	i = 2356467;
	c = v;
	
	printf("\n%d", ft_printf(" %p %p ", 0, 0));
	printf("\n");	
	printf("\n%d", printf(" %p ", 1));
	printf("\n");
	printf("\n%d", ft_printf(" %p ", s));
	printf("\n");
	printf("\n%d", printf(" %p ", s));
	printf("\n");
	printf("\n%d", ft_printf(" %p ", s1));
	printf("\n");
	printf("\n%d", printf(" %p ", s1));
	printf("\n");
	printf("\n%d", ft_printf(" %p ", s2));
	printf("\n");
	printf("\n%d", printf(" %p ", s2));
	printf("\n");
	printf("\n%d", ft_printf(" %x ", 17));
	printf("\n");
	printf("\n%d", printf(" %x ", 17));
	printf("\n");
	printf("\n%d", ft_printf("%c", '0'));
	printf("\n");
	printf("\n%d", printf("%c", '0'));
	printf("\nnew test");
	printf("\n%d", ft_printf(" %s %s ", "", "-"));
	printf("\n");
	printf("\n%d", printf(" %s %s ", "", "-"));
	printf("\nnew test");
	printf("\n%d", ft_printf(" %c %c %c ", '0', '0', '1'));
	printf("\n");
	printf("\n%d", printf(" %c %c %c ", '0', '0', '1'));
	printf("\nnewtest");
	printf("\n%d", ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "));
	printf("\n");
	printf("\n%d", printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "));
	printf("\n");
	return (0);
}*/
