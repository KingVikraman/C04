/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:35:18 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/14 12:17:24 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	r;

	r = 0;
	while (str[r] != '\0')
	{
		r++;
	}
	return (r);
}
/*
int main()
{
    char *str = "Raja Vikraman"; 
    int length = ft_strlen(str);
    printf("Length of the string provided: %d\n", length);
    return (0);
}
*/
