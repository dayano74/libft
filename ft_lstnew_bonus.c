/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:13:36 by dayano            #+#    #+#             */
/*   Updated: 2024/11/11 22:00:53 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	result = malloc(sizeof(t_list));
	if (!result)
		return (NULL);
	result->content = content;
	result->next = NULL;
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	void	*content;
// 	t_list	*ans;

// 	content = "Hello";
// 	ans = ft_lstnew((char *)content);
// 	printf("%s\n", (char *)ans->content);
// 	free(ans);
// }
