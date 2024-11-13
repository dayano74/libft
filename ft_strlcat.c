/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:23:04 by dayano            #+#    #+#             */
/*   Updated: 2024/11/11 21:14:34 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_length;
	size_t	dst_length;
	size_t	i;

	if (!dst)
		dst_length = 0;
	else
		dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dst_length >= size)
		return (size + src_length);
	i = 0;
	while (src[i] != '\0' && size - dst_length - 1 - i > 0)
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	if (dst)
		dst[dst_length + i] = '\0';
	return (src_length + dst_length);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char		dst[20] = "Hello,";
// 	const char	src[] = "World!";

// 	ft_strlcat(dst, src, 14);
// 	printf("dst:%s\n", dst);
// 	ft_strlcat(dst, (void *)0, 14);
// 	printf("dst:%s\n", dst);
// }

// Under standard usage,
// passing a NULL pointer to src is not typical or intended.
