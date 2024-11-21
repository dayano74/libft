/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:16:43 by dayano            #+#    #+#             */
/*   Updated: 2024/11/21 18:31:00 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src_ptr;
	unsigned char	*dest_ptr;

	if (n == 0)
		return (dest);
	if (!dest && !src)
		return (NULL);
	src_ptr = (unsigned char *)src;
	dest_ptr = (unsigned char *)dest;
	if (src_ptr < dest_ptr && src_ptr + n > dest_ptr)
	{
		src_ptr += n;
		dest_ptr += n;
		while (n--)
			*--dest_ptr = *--src_ptr;
	}
	else
	{
		while (n--)
			*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dest[14];
// 	char	src[] = "Hello, world!";
// 	int		n;

// 	n = 5;
// 	// memmove(dest, src, n);
// 	ft_memmove(dest, src, n);
// 	printf("dest:%s\nsrc :%s\n", dest, src);
// 	memcpy(src + 6, src, 6); // memocpyだとsrcを書き換えることは実行できない、
// 	ft_memmove(src + 6, src, 6);
// 	// memmove(src + 6, src, 6);
// 	printf("dest:%s\n", src);
// 	return (0);
// }
