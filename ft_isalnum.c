/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:03:06 by dayano            #+#    #+#             */
/*   Updated: 2024/10/25 13:12:04 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("ft_:%d\n", ft_isalnum('0'));
// 	printf("org:%d\n", isalnum('0'));
// 	printf("ft_:%d\n", ft_isalnum('9'));
// 	printf("org:%d\n", isalnum('9'));
// 	printf("ft_:%d\n", ft_isalnum('a'));
// 	printf("org:%d\n", isalnum('a'));
// 	printf("ft_:%d\n", ft_isalnum(5));
// 	printf("org:%d\n", isalnum(5));
// 	printf("ft_:%d\n", ft_isalnum(' '));
// 	printf("org:%d\n", isalnum(' '));
// 	return (0);
// }

// return value:
// nonzero if the character c falls into the tested class,
// and zero if not.
