/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:54:38 by dayano            #+#    #+#             */
/*   Updated: 2024/11/08 20:32:58 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

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

int	ft_lstsize(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head;
// 	int		size;
// 	t_list	*empty_list;
// 	int		empty_size;
// 	t_list	*temp;

// 	head = create_node(1);
// 	head->next = create_node(2);
// 	head->next->next = create_node(3);
// 	head->next->next->next = create_node(4);
// 	// リストのサイズを計算
// 	size = ft_lstsize(head);
// 	printf("List size (4 elements): %d\n", size); // 期待される出力：4
// 	// 空のリストをテスト
// 	empty_list = NULL;
// 	empty_size = ft_lstsize(empty_list);
// 	printf("List size (empty): %d\n", empty_size); // 期待される出力：0
// 	// メモリ解放
// 	while (head != NULL)
// 	{
// 		temp = head;
// 		head = head->next;
// 		free(temp);
// 	}
// 	return (0);
// }
