/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:53:37 by dayano            #+#    #+#             */
/*   Updated: 2024/10/23 13:13:52 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("ft_:%d\n", ft_isdigit('0'));
// 	printf("org:%d\n", isdigit('0'));
// 	printf("ft_:%d\n", ft_isdigit('9'));
// 	printf("org:%d\n", isdigit('9'));
// 	printf("ft_:%d\n", ft_isdigit('a'));
// 	printf("org:%d\n", isdigit('a'));
// 	printf("ft_:%d\n", ft_isdigit(5));
// 	printf("org:%d\n", isdigit(5));
// 	return (0);
// }

// return value:
// nonzero if the character c falls into the tested class,
// and zero if not.
