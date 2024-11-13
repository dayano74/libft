/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:35:12 by dayano            #+#    #+#             */
/*   Updated: 2024/11/11 22:00:46 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// static t_list	*create_node(int value)
// {
// 	t_list	*node;

// 	node = (t_list *)malloc(sizeof(t_list));
// 	if (!node)
// 		return (NULL);
// 	node->content = (void *)(size_t)value;
// 	node->next = NULL;
// 	return (node);
// }

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*last_node;
// 	t_list	*empty_list;
// 	t_list	*empty_last_node;
// 	t_list	*temp;

// 	// リストを作成
// 	head = create_node(1);
// 	head->next = create_node(2);
// 	head->next->next = create_node(3);
// 	head->next->next->next = create_node(4);
// 	// リストの最後の要素を取得
// 	last_node = ft_lstlast(head);
// 	if (last_node != NULL)
// 		printf("Last node content (expected 4): %d\n",
// 			(int)(size_t)last_node->content);
// 	else
// 		printf("List is empty.\n");
// 	// 空のリストをテスト
// 	empty_list = NULL;
// 	empty_last_node = ft_lstlast(empty_list);
// 	if (empty_last_node == NULL)
// 		printf("Last node in empty list: NULL\n");
// 	// メモリ解放
// 	while (head != NULL)
// 	{
// 		temp = head;
// 		head = head->next;
// 		free(temp);
// 	}
// 	return (0);
// }
