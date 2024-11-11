/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayano <dayano@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:24:01 by dayano            #+#    #+#             */
/*   Updated: 2024/11/08 11:44:16 by dayano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10 + '0'), fd);
}

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
