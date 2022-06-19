/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:50:35 by pbiederm          #+#    #+#             */
/*   Updated: 2022/03/31 11:50:35 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0' )
	{
		i++;
		str = str + 1;
	}
	return (i);
}

/*
int	main()
{
	char str[8] = "Hello";
	int result;
	// its 5
	result = ft_strlen(str);
	printf("%d", result);
}
*/
