/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:08:10 by dayano            #+#    #+#             */
/*   Updated: 2024/10/23 13:13:33 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("ft_:%d\n", ft_isalpha('a'));
// 	printf("org:%d\n", isalpha('a'));
// 	printf("ft_:%d\n", ft_isalpha('Z'));
// 	printf("org:%d\n", isalpha('Z'));
// 	printf("ft_:%d\n", ft_isalpha(' '));
// 	printf("org:%d\n", isalpha(' '));
// 	return (0);
// }

// return value:
// nonzero if the character c falls into the tested class,
// and zero if not.
