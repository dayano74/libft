/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:13:22 by dayano            #+#    #+#             */
/*   Updated: 2024/11/11 16:08:17 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

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

// intptr_t は C 言語の標準ライブラリ（<stdint.h> ）で定義されている型
// 整数とポインタの相互変換が安全に行えるように設計された整数型
// ポインタの値を「整数」として保存したり、その逆に「整数」をポインタに変換したりでき
