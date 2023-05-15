/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:15:25 by jareste-          #+#    #+#             */
/*   Updated: 2023/05/11 21:10:03 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_print_hex(unsigned int n, char format, int c_printed)
{
	char	*basel;
	char	*baseu;

	basel = "0123456789abcdef";
	baseu = "0123456789ABCDEF";
	if (n > 15)
		c_printed = ft_print_hex(n / 16, format, c_printed);
	if (format == 'x')
	{
		c_printed++;
		ft_putchar_fd(basel[n % 16], 1);
	}
	if (format == 'X')
	{
		c_printed++;
		ft_putchar_fd(baseu[n % 16], 1);
	}
	return (c_printed);
}
