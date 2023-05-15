/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 00:52:13 by jareste-          #+#    #+#             */
/*   Updated: 2023/05/11 21:15:47 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_check_format(char format, va_list args)
{
	int	c_printed;

	c_printed = 0;
	if (format == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		c_printed++;
	}
	if (format == 's')
		c_printed = ft_print_string(va_arg(args, char *));
	if (format == 'p')
		c_printed = ft_print_ptr(va_arg(args, void *));
	if (format == 'd' || format == 'i')
		c_printed = ft_print_decimal(va_arg(args, int));
	if (format == 'u')
		c_printed = ft_print_uinteger(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		c_printed = ft_print_hex(va_arg(args, unsigned int), format, 0);
	if (format == '%')
	{
		ft_putchar_fd('%', 1);
		c_printed++;
	}
	return (c_printed);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		c_printed;
	int		i;

	c_printed = 0;
	va_start(args, s);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			c_printed += ft_check_format(s[i + 1], args) + 1;
			i++;
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			c_printed++;
		}
		i++;
	}
	va_end(args);
	return (c_printed);
}

/*
int	main(void)
{
	int a = 6;
	char *b = "muchas gracias";
	unsigned int c = 4294967295;
	int dfs;
	void *s = "holaquetal";
	unsigned int x = 636321;

//	ft_print_decimal(a);
//	printf("\n\n\n\n\n");
	dfs = ft_printf("hola %d\n, %s, %d oooo %u  %p  :a %X", a, b, a, c, s, x);
	ft_printf("      %i", dfs);
	dfs = printf("\n\n\n\nhola %d\n, %s, %d oooo %u %p   :a %X", a, b, a, c, s, x);
	printf("      %i", dfs);
	return (0);

}*/
