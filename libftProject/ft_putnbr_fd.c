/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:51:07 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 17:31:13 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 12);
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

/* 
int	main(void)
{
	ft_putnbr_fd(12345, 1);
	write(1, "\n", 1); // this only prints a newline
	ft_putnbr_fd(-9876, 1);
	write(1, "\n", 1); // this only prints a newline
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1); // this only prints a newline
	return (0);
} */
/* cc -Wall -Wextra -Werror ft_putnbr_fd.c && ./a.out */