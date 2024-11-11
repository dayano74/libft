/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:15:54 by dayano            #+#    #+#             */
/*   Updated: 2024/11/03 21:34:36 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	result = malloc(sizeof(char) * (end - start + 2));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + start, end - start + 2);
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char const	*s1;
// 	char const	*set;

// 	s1 = "aaa/bbb?ccc!";
// 	set = "a/c!";
// 	printf("s1:%s set:%s\nft_strtrim(s1, set)->%s\n", s1, set, ft_strtrim(s1,
// 			set));
// 	printf("\n");
// 	printf("s1:%s set:%s\nft_strtrim(s1, set)->%s\n", "", "", ft_strtrim("",
// 			""));
// 	printf("\n");
// 	printf("s1:%s set:%s\nft_strtrim(s1, set)->%s\n", s1, "", ft_strtrim(s1,
// 			""));
// 	printf("\n");
// 	printf("s1:%s set:%s\nft_strtrim(s1, set)->%s\n", "", set, ft_strtrim("",
// 			""));
// 	printf("\n");
// }
