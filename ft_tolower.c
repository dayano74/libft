/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:45:54 by dayano            #+#    #+#             */
/*   Updated: 2024/11/07 20:31:20 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	else
		return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%c\n", ft_tolower('a'));
// 	printf("%d\n", ft_tolower('a'));
// 	printf("%c\n", ft_tolower('A'));
// 	printf("%c\n", ft_tolower('z'));
// 	printf("%d\n", ft_tolower('z'));
// 	printf("%c\n", ft_tolower('Z'));
// 	printf("%d\n", ft_tolower(33));
// }
