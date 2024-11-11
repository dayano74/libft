/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:25:22 by dayano            #+#    #+#             */
/*   Updated: 2024/11/11 15:12:47 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}

// #include <stdio.h>

// static void	print_list(t_list *lst)
// {
// 	if (!lst)
// 	{
// 		printf("lst == NULL\n");
// 		return ;
// 	}
// 	while (lst)
// 	{
// 		printf("%d -> ", *(int *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// static void	del_content(void *content)
// {
// 	free(content);
// 	printf("content freed\n");
// }

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*new1;
// 	t_list	*new2;
// 	int		val1;
// 	int		val2;
// 	int		val3;

// 	val1 = 1;
// 	val2 = 2;
// 	val3 = 3;
// 	head = ft_lstnew(&val1);
// 	new1 = ft_lstnew(&val2);
// 	new2 = ft_lstnew(&val3);
// 	ft_lstadd_front(&head, new1);
// 	ft_lstadd_front(&head, new2);
// 	print_list(head); // 期待出力: 3 -> 2 -> 1 -> NULL
// 	ft_lstclear(&head, del_content);
// 	print_list(head);
// }
