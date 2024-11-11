/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:19:16 by dayano            #+#    #+#             */
/*   Updated: 2024/11/07 17:07:17 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, len_s1 + 1);
	ft_strlcpy(result + len_s1, s2, len_s2 + 1);
	result[len_s1 + len_s2] = '\0';
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char const	*s1;
// 	char const	*s2;
// 	char		*result;

// 	s1 = "Hello,";
// 	s2 = " World!";
// 	printf("%s\n", ft_strjoin(s1, s2));
// 	result = ft_strjoin(NULL, s2);
// 	if (result)
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}
// 	result = ft_strjoin(s1, NULL);
// 	if (result)
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}
// 	result = ft_strjoin(NULL, NULL);
// 	if (result)
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}
// 	result = ft_strjoin("", s2);
// 	if (result)
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}
// 	result = ft_strjoin(s1, "");
// 	if (result)
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}
// 	return (0);
// }
