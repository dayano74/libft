/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:51:01 by dayano            #+#    #+#             */
/*   Updated: 2024/11/02 20:23:25 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (nmemb != 0 && size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	const int	size = 10;
// 	int			*array_int;
// 	char		*array_char;
// 	int			*array_zero;
// 	float		*array_float;
// 	size_t		large_size;
// 	int			*large_array;

// 	array_int = ft_calloc(size, sizeof(int));
// 	if (array_int == NULL)
// 	{
// 		return (1);
// 	}
// 	for (int i = 0; i < size; ++i)
// 	{
// 		printf("%d\n", array_int[i]);
// 	}
// 	free(array_int);
// 	//
// 	array_char = ft_calloc(size, sizeof(char));
// 	if (array_char == NULL)
// 	{
// 		return (1);
// 	}
// 	for (int i = 0; i < size; ++i)
// 	{
// 		printf("%c\n", array_char[i]);
// 	}
// 	free(array_char);
// 	//
// 	printf("\nTest case:nmemb = 0\n");
// 	array_zero = ft_calloc(0, sizeof(int));
// 	if (array_zero == NULL)
// 	{
// 		printf("Allocation failed for large size as expected.\n");
// 	}
// 	else
// 	{
// 		printf("Allocation succeeded for zero nmemb.\n");
// 		free(array_zero);
// 	}
// 	//
// 	printf("\nTest case:nmemb * size > SIZE_MAX\n");
// 	large_size = SIZE_MAX / 2 + 1;
// 	large_array = ft_calloc(large_size, 2);
// 	if (large_array == NULL)
// 	{
// 		printf("Allocation failed for large size as expected.\n");
// 	}
// 	else
// 	{
// 		printf("Allocation succeeded unexpectedly for large size.\n");
// 		free(large_array);
// 	}
// 	//
// 	printf("\nTest case:sizeof(float)\n");
// 	array_float = ft_calloc(size, sizeof(float));
// 	if (array_float == NULL)
// 	{
// 		printf("Memory allocation for array_float faile.\n");
// 		return (1);
// 	}
// 	for (int i = 0; i < size; ++i)
// 	{
// 		printf("%f\n", array_float[i]);
// 	}
// 	free(array_float);
// }
