/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:29:35 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/14 12:18:20 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	r;

	r = 0;
	while (str[r] != '\0')
	{
		write(1, &str[r], 1);
		r++;
	}
}
/*
int main() {
    char *str = "RAJA VIKRAMAN A/L KALAICHELVAN!";
    ft_putstr(str);
    return 0;
}
*/
