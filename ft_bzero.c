/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:54:34 by dayano            #+#    #+#             */
/*   Updated: 2024/11/21 18:28:30 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// #include <strings.h>

// int	main(void)
// {
// 	char	str[] = "Hello, world!";

// 	ft_bzero(str, 6);
// 	for (int i = 0; i < 14; i++)
// 		printf("org:%d\n", str[i]);
// 	// bzero(str, 6);
// 	// for (int i = 0; i < 14; i++)
// 	// 	printf("org:%d\n", str[i]);
// }
