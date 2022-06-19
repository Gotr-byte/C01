/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:31:15 by pbiederm          #+#    #+#             */
/*   Updated: 2022/03/29 20:31:15 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
/*
int	main ()
{
	int	val_1;
	int	val_2;
	val_1 = 1;
	val_2 = 2;
	printf("init val_1: %d\n", val_1);
	printf("init val_2: %d\n", val_2);
	ft_swap(&val_1, &val_2);
	printf("out val_1: %d\n", val_1);
	printf("out val_2: %d\n", val_2);
}
*/
