/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:09:21 by dayano            #+#    #+#             */
/*   Updated: 2024/11/03 17:20:25 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_ptr;
	int		s_length;

	s_length = ft_strlen(s);
	s_ptr = (char *)s + s_length - 1;
	if (c == '\0')
		return ((char *)s + s_length);
	while (s_length--)
	{
		if (*s_ptr == (char)c)
			return (s_ptr);
		s_ptr--;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;
// 	int		c;
// 	char	*result;

// 	s = "Hello, World!";
// 	c = 'o';
// 	printf("org:%s\n", s);
// 	result = ft_strrchr(s, c);
// 	if (result != NULL)
// 		printf("after ft_strchr:%s\n", result);
// 	else
// 		printf("character not found\n");
// 	s = "Hello, World!";
// 	c = '\0';
// 	result = ft_strrchr(s, c);
// 	if (result != NULL)
// 		printf("after ft_strchr:%s\n", result);
// 	else
// 		printf("character not found\n");
// 	return (0);
// }
