/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:03:48 by dayano            #+#    #+#             */
/*   Updated: 2024/11/08 18:08:44 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	get_sign(const char *nptr, int *i)
{
	if (nptr[*i] == '-')
	{
		(*i)++;
		return (-1);
	}
	else if (nptr[*i] == '+')
		(*i)++;
	return (1);
}

int	ft_atoi(const char *nptr)
{
	long	result;
	int		sign;
	int		i;

	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (!((nptr[i] >= '0' && nptr[i] <= '9') || nptr[i] == '-'
			|| nptr[i] == '+'))
		return (0);
	sign = get_sign(nptr, &i);
	result = 0;
	while (ft_isdigit(nptr[i]))
	{
		if (result > (LONG_MAX - (nptr[i] - '0')) / 10 && sign == -1)
			return ((int)LONG_MIN);
		else if (result > (LONG_MAX - (nptr[i] - '0')) / 10 && sign == 1)
			return ((int)LONG_MAX);
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)(sign * result));
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	printf("Test case:123\n");
// 	printf("org:%d\n", atoi("123"));
// 	printf("ft_:%d\n", ft_atoi("123"));
// 	//
// 	printf("\nTest case:-456\n");
// 	printf("org:%d\n", atoi("-456"));
// 	printf("ft_:%d\n", ft_atoi("-456"));
// 	//
// 	printf("\nTest case:INT_MAX 2147483647\n");
// 	printf("org:%d\n", atoi("2147483647"));
// 	printf("ft_:%d\n", ft_atoi("2147483647"));
// 	//
// 	printf("\nTest case:INT_MAX -2147483648\n");
// 	printf("org:%d\n", atoi("-2147483648"));
// 	printf("ft_:%d\n", ft_atoi("-2147483648"));
// 	//
// 	printf("\nTest case:21474836480\n");
// 	printf("org:%d\n", atoi("21474836480"));
// 	printf("ft_:%d\n", ft_atoi("21474836480"));
// 	//
// 	printf("\nTest case:21474836489\n");
// 	printf("org:%d\n", atoi("21474836489"));
// 	printf("ft_:%d\n", ft_atoi("21474836489"));
// 	//
// 	printf("\nTest case:9223372036854775808\n");
// 	printf("org:%d\n", atoi("9223372036854775808"));
// 	printf("ft_:%d\n", ft_atoi("9223372036854775808"));
// 	//
// 	printf("\nTest case:dpagn   	\n789\n");
// 	printf("org:%d\n", atoi("dpagn   	\n789"));
// 	printf("ft_:%d\n", ft_atoi("dpagn   	\n789"));
// 	//
// 	printf("\nTest case:    789\n");
// 	printf("org:%d\n", atoi("    789"));
// 	printf("ft_:%d\n", ft_atoi("    789"));
// 	//
// 	printf("\nTest case:+789\n");
// 	printf("org:%d\n", atoi("+789"));
// 	printf("ft_:%d\n", ft_atoi("+789"));
// 	//
// 	printf("\nTest case:+\n");
// 	printf("org:%d\n", atoi("+"));
// 	printf("ft_:%d\n", ft_atoi("+"));
// 	return (0);
// }
