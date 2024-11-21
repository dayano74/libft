/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:21:23 by dayano            #+#    #+#             */
/*   Updated: 2024/11/21 20:28:16 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	char	*ptr;

	dup = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (dup == NULL)
		return (NULL);
	ptr = dup;
	while (*s)
		*ptr++ = *s++;
	*ptr = '\0';
	return (dup);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	*s = "Hello, World!";
// 	const char	*s_empty = "";
// 	const char	*s_long = "This is a long string.";
// 	const char	*s_multiple_nulls = "Multiple\0nulls\0in\0string";
// 	char		*dup_org;
// 	char		*dup_ft;

// 	//
// 	dup_org = strdup(s);
// 	printf("org:%s\n", dup_org);
// 	free(dup_org);
// 	//
// 	dup_ft = ft_strdup(s);
// 	printf("ft_:%s\n", dup_ft);
// 	free(dup_ft);
// 	//
// 	dup_ft = ft_strdup(s_empty);
// 	printf("ft_(empty):%s\n", dup_ft);
// 	free(dup_ft);
// 	//
// 	dup_ft = ft_strdup(s_long);
// 	printf("ft_ (long):%s\n", dup_ft);
// 	free(dup_ft);
// 	//
// 	dup_ft = ft_strdup(s_multiple_nulls);
// 	printf("ft_ (multiple nulls):%s\n", dup_ft);
// 	free(dup_ft);
// }
