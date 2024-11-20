/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:57:19 by dayano            #+#    #+#             */
/*   Updated: 2024/11/19 22:34:37 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_ptr;
	int		s_length;

	s_length = ft_strlen((char *)s);
	s_ptr = (char *)s;
	while (*s_ptr)
	{
		if (*s_ptr == (char)c)
			return (s_ptr);
		s_ptr++;
	}
	if (c == '\0')
		return ((char *)s + s_length);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*s;
// 	char	*result;
// 	int		c;

// 	s = "  hello";
// 	c = 'e';
// 	printf("original str:%s\n", s);
// 	result = ft_strchr(s, c);
// 	// result = strchr(s, 'e');
// 	if (result != NULL)
// 		printf("after ft_strchr:%s\n", result);
// 	else
// 		printf("character not found\n");
// 	s = "  hello";
// 	c = '\0';
// 	printf("original str:%s\n", s);
// 	result = ft_strchr(s, c);
// 	// result = strchr(s, 'e');
// 	if (result != NULL)
// 		printf("after ft_strchr:%s\n", result);
// 	else
// 		printf("character not found\n");
// 	s = "  hello";
// 	c = 1;
// 	printf("original str:%s\n", s);
// 	result = ft_strchr(s, c);
// 	// result = strchr(s, 'e');
// 	if (result != NULL)
// 		printf("after ft_strchr:%s\n", result);
// 	else
// 		printf("character not found\n");
// }
