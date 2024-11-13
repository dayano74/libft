/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:14:24 by dayano            #+#    #+#             */
/*   Updated: 2024/11/12 14:37:50 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// void	*add_ten(void *content)
// {
// 	int	*new_content;

// 	new_content = malloc(sizeof(int));
// 	if (!new_content)
// 		return (NULL);
// 	*new_content = *(int *)content + 10;
// 	return (new_content);
// }
// #include <stdint.h>
// #include <stdio.h>

// void	delete_content(void *content)
// {
// 	free(content);
// 	printf("freed\n");
// }

// int	main(void)
// {
// 	t_list	*head_1;
// 	t_list	*head_2;
// 	t_list	*temp;
// 	t_list	*temp2;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	int		*val0;
// 	int		*val1;
// 	int		*val2;
// 	int		*val3;

// 	val0 = (int *)malloc(sizeof(int));
// 	val1 = (int *)malloc(sizeof(int));
// 	val2 = (int *)malloc(sizeof(int));
// 	val3 = (int *)malloc(sizeof(int));
// 	*val0 = 0;
// 	*val1 = 1;
// 	*val2 = 2;
// 	*val3 = 3;
// 	head_1 = ft_lstnew(val0);
// 	node1 = ft_lstnew(val1);
// 	node2 = ft_lstnew(val2);
// 	node3 = ft_lstnew(val3);
// 	ft_lstadd_back(&head_1, node1);
// 	ft_lstadd_back(&head_1, node2);
// 	ft_lstadd_back(&head_1, node3);
// 	// 元のリストの内容を表示
// 	temp = head_1;
// 	while (temp)
// 	{
// 		printf("before ft_lstmap: %d\n", *(int *)temp->content);
// 		temp = temp->next;
// 	}
// 	// 新しいリストを作成
// 	head_2 = ft_lstmap(head_1, add_ten, delete_content);
// 	// 新しいリストの内容を表示
// 	temp2 = head_2;
// 	while (temp2)
// 	{
// 		printf("after ft_lstmap: %d\n", *(int *)temp2->content);
// 		temp2 = temp2->next;
// 	}
// 	// メモリ解放
// 	ft_lstclear(&head_1, delete_content);
// 	ft_lstclear(&head_2, delete_content);
// 	return (0);
// }
