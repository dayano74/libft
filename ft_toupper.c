/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:30:57 by dayano            #+#    #+#             */
/*   Updated: 2024/10/25 20:49:34 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%c\n", ft_toupper('a'));
// 	printf("%d\n", ft_toupper('a'));
// 	printf("%c\n", ft_toupper('A'));
// 	printf("%c\n", ft_toupper('z'));
// 	printf("%d\n", ft_toupper('z'));
// 	printf("%c\n", ft_toupper('Z'));
// 	printf("%d\n", ft_toupper(33));
// }
