/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:03:00 by dayano            #+#    #+#             */
/*   Updated: 2024/10/25 13:13:52 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str[] = "Good morning\n";

// 	printf("ft_:%zu\n", ft_strlen(str));
// 	printf("ft_:%lu\n", strlen(str));
// 	printf("ft_:%zu\n", ft_strlen("Hello"));
// 	printf("ft_:%lu\n", strlen("Hello"));
// 	printf("ft_:%zu\n", ft_strlen(""));
// 	printf("ft_:%lu\n", strlen(""));
// 	return (0);
// }

// // pointer ver.
// size_t	ft_strlen(const char *s)
// {
// 	const char *const head = s;
// 	while (*s)
// 		s++;
// 	return (s - head);
// }
