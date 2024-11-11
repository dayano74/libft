/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:29:06 by dayano            #+#    #+#             */
/*   Updated: 2024/11/02 20:22:26 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j] && (i + j) < len
				&& little[j] != '\0')
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	*largestring = "Foo Bar Baz";
// 	const char	*smallstring = "Bar";
// 	char		*result;

// 	printf("Test case:found\n");
// 	result = ft_strnstr(largestring, smallstring, 9);
// 	if (result != NULL)
// 		printf("ft_strnstr:%s\n", result);
// 	else
// 		printf("not found smallstring in largestring\n");
// 	//
// 	printf("\nTest case:not found\n");
// 	result = ft_strnstr(largestring, smallstring, 4);
// 	if (result != NULL)
// 		printf("ft_strnstr:%s\n", result);
// 	else
// 		printf("not found smallstring in largestring\n");
// 	//
// 	printf("\nTest case: little partially matches\n");
// 	smallstring = "Baz";
// 	result = ft_strnstr(largestring, smallstring, 8);
// 	if (result != NULL)
// 		printf("ft_strnstr: %s\n", result);
// 	else
// 		printf("not found smallstring in largestring\n");
// }
