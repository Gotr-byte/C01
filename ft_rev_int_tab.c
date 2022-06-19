/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:33:07 by pbiederm          #+#    #+#             */
/*   Updated: 2022/03/31 18:33:07 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h> //use to test

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = size - 1;
	j = 0;
	while (i > -1)
	{	
		temp = *(tab + j);
		*(tab + j) = *(tab + i);
		*(tab + i) = temp;
		if (i % 2 == 0 && i == j)
		{
			break ;
		}
		if (i % 2 != 0 && i == (j + 1))
		{
			break ;
		}
		j++;
		i--;
	}
}

/*
int	main()
{
	int a[] = {13, 14, 15, 16, 17, 19};
	ft_rev_int_tab(a, 6);		
}


//printf ("%d, %d, %d, %d, %d", *tab, *(tab+1), *(tab+2), *(tab+3), *(tab+4));
//use this to test inside the function
*/