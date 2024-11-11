/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:23:01 by dayano            #+#    #+#             */
/*   Updated: 2024/11/07 19:47:01 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str[14];

// 	memset(str, '\0', 14);
// 	puts("null文字で初期化");
// 	ft_memset(str, 'a', 6);
// 	printf("ft_:%s\n", str);
// 	memset(str, '\0', 14);
// 	puts("null文字で初期化");
// 	memset(str, 'a', 6);
// 	printf("org:%s\n", str);
// 	return (0);
// }
