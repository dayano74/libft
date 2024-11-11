/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:26:47 by dayano            #+#    #+#             */
/*   Updated: 2024/11/08 18:39:41 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	function(unsigned int index, char *s)
// {
// 	if (index % 2 == 0)
// 		s[index] = ft_toupper(s[index]);
// 	else
// 		s[index] = ft_tolower(s[index]);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (!s || !f)
		return ;
	index = 0;
	while (s[index] != '\0')
	{
		f(index, &s[index]);
		index++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "Hello, World!";
// 	char	s2[] = "";
// 	char	s3[] = "ALLUPPERCASE";
// 	char	s4[] = "alllowercase";

// 	printf("Original: %s\n", s1);
// 	ft_striteri(s1, function);
// 	printf("Modified: %s\n\n", s1);
// 	//
// 	printf("Original: %s\n", s2);
// 	ft_striteri(s2, function);
// 	printf("Modified: %s\n\n", s2);
// 	//
// 	printf("Original: %s\n", s3);
// 	ft_striteri(s3, function);
// 	printf("Modified: %s\n\n", s3);
// 	//
// 	printf("Original: %s\n", s4);
// 	ft_striteri(s4, function);
// 	printf("Modified: %s\n", s4);
// }
