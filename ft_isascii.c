/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:14:29 by dayano            #+#    #+#             */
/*   Updated: 2024/10/23 13:54:07 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("ft_:%d\n", ft_isascii('\n'));
// 	printf("org:%d\n", isascii('\n'));
// 	printf("ft_:%d\n", ft_isascii(200));
// 	printf("org:%d\n", isascii(200));
// 	printf("ft_:%d\n", ft_isascii('A'));
// 	printf("org:%d\n", isascii('A'));
// }
