/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:24:01 by dayano            #+#    #+#             */
/*   Updated: 2024/11/19 14:48:08 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putlong_fd(long long int n, int fd)
{
	if (n < 0)
	{
		if (write(fd, "-", 1) == -1)
			return ;
		n = -n;
	}
	if (n >= 10)
		ft_putlong_fd(n / 10, fd);
	ft_putchar_fd((n % 10 + '0'), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putlong_fd((long long int)n, fd);
}

// #include "libft.h"

// void	ft_putnbr_fd(int n, int fd)
// {
// 	if (n == -2147483648)
// 	{
// 		write(fd, "-2147483648", 11);
// 		return ;
// 	}
// 	if (n < 0)
// 	{
// 		write(fd, "-", 1);
// 		n = -n;
// 	}
// 	if (n >= 10)
// 		ft_putnbr_fd(n / 10, fd);
// 	ft_putchar_fd((n % 10 + '0'), fd);
// }

// #include <stdio.h>

// int	main(void)
// {
// ft_putnbr_fd(123, 1);
// printf("\n");
// //
// ft_putnbr_fd(-456, 1);
// printf("\n");
// //
// ft_putnbr_fd(INT_MIN, 1);
// printf("\n");
//
// ft_putnbr_fd(INT_MAX, 1);
// printf("\n");
// //
// ft_putnbr_fd(-2147483648, 1);
// printf("\n");
// }
