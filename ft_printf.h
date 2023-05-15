/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:46:25 by jareste-          #+#    #+#             */
/*   Updated: 2023/05/11 21:03:45 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_print_decimal(int n);
int	ft_print_uinteger(unsigned int n);
int	ft_print_string(char *str);
int	ft_printf(const char *s, ...);
int	ft_print_ptr(void *ptr);
int	ft_print_hex(unsigned int n, char format, int c_printed);

#endif
