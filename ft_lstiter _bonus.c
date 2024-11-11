/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:01:04 by dayano            #+#    #+#             */
/*   Updated: 2024/11/09 18:22:24 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <stdint.h>
// #include <stdio.h>

// void	print_content(void *content)
// {
// 	printf("%d\n", (int)(intptr_t)content);
// }

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	int		val0;
// 	int		val1;
// 	int		val2;

// 	val0 = 0;
// 	val1 = 1;
// 	val2 = 2;
// 	head = ft_lstnew((void *)(intptr_t)val0);
// 	node1 = ft_lstnew((void *)(intptr_t)val1);
// 	node2 = ft_lstnew((void *)(intptr_t)val2);
// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstiter(head, print_content);
// 	return (0);
// }
