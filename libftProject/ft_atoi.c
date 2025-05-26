/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:27:30 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 16:19:17 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

/*The atoi() function converts the initial 
portion of the string pointed to by str to
int representation. */
/* 
int main(void)
{
	int res1;
	int res2;
	int res3;
	int res4;
	int res5;

	char num1[] = {"1234567890"};
	char num2[] = {" 	-1234567890"};
	char num3[] = {"---+++1234567890"};
	char num4[] = {"1234567"};
	char num5[] = {"+1234567890"};

	res1 = ft_atoi(num1);
	printf("test 1 %d\n", res1);

	res2 = ft_atoi(num2);
	printf("test 2 %d\n", res2);

	res3 = ft_atoi(num3);
	printf("test 3 %d\n", res3);

	res4 = ft_atoi(num4);
	printf("test 4 %d\n", res4);

	res5 = ft_atoi(num5);
	printf("test 5 %d\n", res5);

	return(0); 
} */
/* cc -Wall -Wextra -Werror ft_atoi.c && ./a.out */
