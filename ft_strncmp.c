/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:23:52 by dayano            #+#    #+#             */
/*   Updated: 2024/11/08 09:27:16 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s1[] = "Hello, World!";
// 	char	s2[] = "Hello, World!";
// 	char	s3[] = "Hello, Warld!";
// 	char	s4[] = "Hello, World!";
// 	char	s5[] = "Hello";
// 	char	s6[] = "";
// 	size_t	n;

// 	n = 14;
// 	printf("org:%d\n", strncmp(s1, s2, n));
// 	printf("ft_:%d\n", ft_strncmp(s1, s2, n));
// 	n = 0;
// 	printf("org:%d\n", strncmp(s1, s2, n));
// 	printf("ft_:%d\n", ft_strncmp(s1, s2, n));
// 	n = 10;
// 	printf("org:%d\n", strncmp(s3, s4, n));
// 	printf("ft_:%d\n", ft_strncmp(s3, s4, n));
// 	n = 5;
// 	printf("org:%d\n", strncmp(s5, s4, n));
// 	printf("ft_:%d\n", ft_strncmp(s5, s4, n));
// 	n = 5;
// 	printf("org:%d\n", strncmp(s6, s4, n));
// 	printf("ft_:%d\n", ft_strncmp(s6, s4, n));
// 	//
// 	printf("org:%d\n", strncmp("abc", "abc", 3));
// 	printf("ft_:%d\n", ft_strncmp("abc", "abc", 3));
// }
