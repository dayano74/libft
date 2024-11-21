/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:13:22 by dayano            #+#    #+#             */
/*   Updated: 2024/11/21 18:29:08 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// #include <stdint.h>
// #include <stdio.h>

// static void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%d -> ", (int)(intptr_t)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*second;
// 	t_list	*third;

// 	head = ft_lstnew((void *)(intptr_t)1);
// 	second = ft_lstnew((void *)(intptr_t)2);
// 	third = ft_lstnew((void *)(intptr_t)3);
// 	ft_lstadd_back(&head, second);
// 	ft_lstadd_back(&head, third);
// 	print_list(head);
// 	free(head);
// 	free(second);
// 	free(third);
// 	return (0);
// }
