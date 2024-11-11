/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:50:33 by dayano            #+#    #+#             */
/*   Updated: 2024/11/03 16:55:27 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_length;

	src_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	while (size > 1 && *src != '\0')
	{
		*dst++ = *src++;
		size--;
	}
	*dst = '\0';
	return (src_length);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	src[] = "Hello, World!";
// 	char	dst[1000];

// 	// char	dst2[1000];
// 	printf("ft dst:%zu\n", ft_strlcpy(dst, src, 6));
// 	// strlcpy(dst2, src, 6);
// 	// printf("ft dst2:%s\n", dst2);
// }
