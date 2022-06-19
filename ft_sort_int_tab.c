/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 07:14:27 by pbiederm          #+#    #+#             */
/*   Updated: 2022/04/01 07:14:27 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size -1)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap (tab + i, tab + (i +1));
		}
		i++;
	}
}

/*
int	main()
{
	int a[] = {13, 4, 10};
	ft_sort_int_tab(a, 5);
	// printf ("%d, %d, %d",
	 *(tab), *(tab + 1), *(tab + 2));
	// put this in the function to test

}
*/
