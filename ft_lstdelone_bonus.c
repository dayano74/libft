/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:45:47 by dayano            #+#    #+#             */
/*   Updated: 2024/11/11 22:00:38 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// #include <stdio.h>

// static void	del_content(void *content)
// {
// 	free(content);
// 	printf("content freed\n");
// }

// int	main(void)
// {
// 	int		*data;
// 	t_list	*node;

// 	data = malloc(sizeof(int));
// 	*data = 42;
// 	node = ft_lstnew(data);
// 	ft_lstdelone(node, del_content);
// 	return (0);
// }
