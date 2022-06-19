/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:22:20 by pbiederm          #+#    #+#             */
/*   Updated: 2022/03/30 12:22:20 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	temp_div = *a / *b;
	temp_mod = *a % *b;
	*a = temp_div;
	*b = temp_mod;
}

/*
int	main ()
{
	int a;
	int b;
	a = 123;
	b = 10;
	printf ("a: %d\n", a);
	printf ("b: %d\n", b);

	ft_ultimate_div_mod	(&a, &b);

	printf	("div: %d\n", a);
	printf	("div: %d\n", b);
}
*/