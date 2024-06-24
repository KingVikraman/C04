/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:29:46 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/14 14:23:47 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	whitespace(char *str)
{
	int	i;

	i = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	res;
	int	i;

	sign = 1;
	res = 0;
	i = whitespace(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
int main()
{
    char str[] = "  ---+--+1234ab567";
    int i = ft_atoi(str);
    printf("value = %d", i);
    return 0;
}
*/
