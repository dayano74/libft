/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:18:41 by dayano            #+#    #+#             */
/*   Updated: 2024/11/07 17:08:31 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_empty_str(void)
{
	char	*str;

	str = malloc(1);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (get_empty_str());
	if (len > s_len - start)
		len = s_len - start;
	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char const	*s;

// 	s = "Hello, World!";
// 	printf("%s\n", ft_substr(s, 7, 5));
// 	printf("%s\n", ft_substr("Hello, World!", 20, 5)); // if start >= s_len
// 	printf("%s\n", ft_substr("Hello, World!", 13, 5));
// 	printf("%s\n", ft_substr("Hello, World!", 7, 0));
// 	printf("%s\n", ft_substr("Hello, World!", 0, 5));
// 	printf("%s\n", ft_substr("Hello, World!", 7, 50));
// 	printf("%s\n", ft_substr("", 0, 5));
// 	printf("%p\n", ft_substr(NULL, 0, 5));             // 出力: (nil) または NULL
// 	printf("%s\n", ft_substr("Hello, World!", 0, 50)); // 出力: "Hello, World!"
// 	printf("%s\n", ft_substr("Hello, World!", 7, 6));  // 出力: "World!"
// }
