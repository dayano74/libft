/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:55:00 by dayano            #+#    #+#             */
/*   Updated: 2024/10/23 14:02:02 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("ft_:%d\n", ft_isprint('\n'));
// 	printf("org:%d\n", isprint('\n'));
// 	printf("ft_:%d\n", ft_isprint(200));
// 	printf("org:%d\n", isprint(200));
// 	printf("ft_:%d\n", ft_isprint('A'));
// 	printf("org:%d\n", isprint('A'));
// 	return (0);
// }

// return value:
// nonzero if the character c falls into the tested class,
// and zero if not.
