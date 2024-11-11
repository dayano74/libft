/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:59:53 by dayano            #+#    #+#             */
/*   Updated: 2024/11/09 18:00:38 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// static void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%d -> ", *(int *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*new1;
// 	t_list	*new2;
// 	t_list	*temp;
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
// 	// メモリ解放
// 	while (head)
// 	{
// 		temp = head;
// 		head = head->next;
// 		free(temp);
// 	}
// 	return (0);
// }
