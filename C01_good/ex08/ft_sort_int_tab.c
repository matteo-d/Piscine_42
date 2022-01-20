/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdrouin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:23:08 by mdrouin           #+#    #+#             */
/*   Updated: 2022/01/19 02:55:59 by mdrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_it(int *tab, int i)
{
	int	temp;

	temp = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	step;
	int	swapped;
	int	i;

	step = 0;
	while (step < size - 1)
	{
		swapped = 0;
		i = 0;
		while (i < size - step - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap_it(tab, i);
				swapped = 1;
			}
			i++ ;
		}
		if (swapped == 0)
		{
			return ;
		}
		step++ ;
	}
}
