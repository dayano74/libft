/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:54:06 by dayano            #+#    #+#             */
/*   Updated: 2024/11/07 20:16:43 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	size_t			i;

	if (n == 0)
		return (dest);
	if (!dest && !src)
		return (NULL);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest_ptr);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dest[14];
// 	char	*src;
// 	int		n;

// 	n = 14;
// 	src = NULL;
// 	printf("before:%s\n", dest);
// 	memcpy(dest, src, n);
// 	printf("after:%s\n", dest);
// }
