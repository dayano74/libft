/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:22:09 by dayano            #+#    #+#             */
/*   Updated: 2024/10/27 17:28:11 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_ptr;

	s_ptr = (const unsigned char *)s;
	while (n-- > 0)
	{
		if (*s_ptr == (unsigned char)c)
			return ((void *)s_ptr);
		s_ptr++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*s;
// 	char	*result;
// 	int		c;
// 	size_t	n;

// 	printf("found c in s\n");
// 	s = "Hello, World!";
// 	c = 'o';
// 	n = 10;
// 	result = ft_memchr(s, c, n);
// 	if (result != NULL)
// 		printf("ft_:%s\n", result);
// 	else
// 		printf("ft_:not found c in c bytes and s\n");
// 	result = memchr(s, c, n);
// 	if (result != NULL)
// 		printf("ori:%s\n", result);
// 	else
// 		printf("org:not found c in c bytes and s\n");
// 	//
// 	printf("\nnot found c. c = 'a'\n");
// 	s = "Hello, World!";
// 	c = 'a';
// 	n = 10;
// 	result = ft_memchr(s, c, n);
// 	if (result != NULL)
// 		printf("ft_:%s\n", result);
// 	else
// 		printf("ft_:not found c in c bytes and s\n");
// 	result = memchr(s, c, n);
// 	if (result != NULL)
// 		printf("ori:%s\n", result);
// 	else
// 		printf("org:not found c in c bytes and s\n");
// 	//
// 	printf("\nnot found c. c = d. n = 5\n");
// 	s = "Hello, World!";
// 	c = 'd';
// 	n = 5;
// 	result = ft_memchr(s, c, n);
// 	if (result != NULL)
// 		printf("ft_:%s\n", result);
// 	else
// 		printf("ft_:not found c in c bytes and s\n");
// 	result = memchr(s, c, n);
// 	if (result != NULL)
// 		printf("ori:%s\n", result);
// 	else
// 		printf("org:not found c in c bytes and s\n");
// 	return (0);
// }
