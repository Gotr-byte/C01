/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:34:46 by pbiederm          #+#    #+#             */
/*   Updated: 2022/03/30 10:34:46 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main ()
{
	int t_v_a;
	int t_v_b;
	int div_val;
	int mod_val;

	t_v_a = 123;
	t_v_b = 10;
	printf ("a: %d	", t_v_a);
	printf ("b: %d	", t_v_b);
	ft_div_mod(t_v_a, t_v_b, &div_val, &mod_val);
	printf ("%d div %d %d", t_v_a, t_v_b, div_val);
	printf ("mod: %d. ", mod_val);
}
*/
