/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:08:31 by pbiederm          #+#    #+#             */
/*   Updated: 2022/03/30 09:08:31 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_ultimate_ft(int *********nbr)

{
	*********nbr = 42;
}

/*
int main()
{
	int t_a;
	int *t_pt;
	int **t_pt1;
	int ***t_pt2;
	int ****t_pt3;
	int *****t_pt4;
	int ******t_pt5;
	int *******t_pt6;
	int ********t_pt7;

	t_a = 41;

	printf ("init: %d\n", t_a);

	
	t_pt = &t_a;
	t_pt1 = &t_pt;
	t_pt2 = &t_pt1;
	t_pt3 = &t_pt2;
	t_pt4 = &t_pt3;
	t_pt5 = &t_pt4;
	t_pt6 = &t_pt5;
	t_pt7 = &t_pt6;

	ft_ultimate_ft(&t_pt7);

	printf ("out: %d\n", t_a);

	return(0);
}
*/
