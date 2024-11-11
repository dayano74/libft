/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:25:19 by dayano            #+#    #+#             */
/*   Updated: 2024/10/26 20:54:02 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > 0 && *s1_ptr == *s2_ptr)
	{
		s1_ptr++;
		s2_ptr++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1_ptr - *s2_ptr);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s1[] = "Hello, World!";
// 	char	s2[] = "Hello, World!";
// 	char	s3[] = "Hello, Warld!";
// 	char	s4[] = "Hello, World!";
// 	size_t	n;

// 	n = 14;
// 	printf("org:%d\n", memcmp(s1, s2, n));
// 	printf("ft_:%d\n", ft_memcmp(s1, s2, n));
// 	n = 0;
// 	printf("org:%d\n", memcmp(s1, s2, n));
// 	printf("ft_:%d\n", ft_memcmp(s1, s2, n));
// 	n = 14;
// 	printf("org:%d\n", memcmp(s3, s4, n));
// 	printf("ft_:%d\n", ft_memcmp(s3, s4, n));
// }
