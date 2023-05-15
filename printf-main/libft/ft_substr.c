/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:44:04 by jareste-          #+#    #+#             */
/*   Updated: 2023/05/08 16:10:57 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s == NULL)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (substr == 0)
		return (0);
	ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}
/*
#include <stdio.h>
int main(void)
{
	char *str = "lorem ipsum dolor sit amet";
	char *ptr;
	 
 	ptr = ft_substr(str, 0, 10);
	printf("%s\n", ptr);
	return (0);
}*/
