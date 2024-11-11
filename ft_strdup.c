/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:21:23 by dayano            #+#    #+#             */
/*   Updated: 2024/11/10 20:57:33 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*str_copy;
	int		word_count;

	word_count = ft_strlen(s);
	str = ft_calloc(sizeof(char), word_count + 1);
	if (str == NULL)
		return (NULL);
	str_copy = str;
	while (*s)
		*str_copy++ = *s++;
	*str_copy = '\0';
	return (str);
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

// strdupの引数にNULLを渡すと、segmentation faultとなる
// ft_strdupにおいても引数にNULLを渡すと、ft_strlenがNULLポインタに干渉しsegmentation faultとなる
