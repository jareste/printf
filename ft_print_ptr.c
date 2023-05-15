/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:45:20 by jareste-          #+#    #+#             */
/*   Updated: 2023/05/09 21:51:09 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int	c_printed;

	ft_print_string("0x");
	c_printed = 2;
	c_printed = ft_print_hex((unsigned long long)ptr, 'x', 0);
	return (c_printed);
}
