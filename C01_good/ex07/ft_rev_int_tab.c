/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdrouin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 02:59:10 by mdrouin           #+#    #+#             */
/*   Updated: 2022/01/19 19:04:54 by mdrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{	
	int	temporary_var;
	int	compteur;

	compteur = 0;
	while (compteur < (size / 2))
	{
		temporary_var = tab[compteur];
		tab[compteur] = tab[size - compteur - 1];
		tab[size - compteur - 1] = temporary_var;
		compteur++ ;
	}
}
