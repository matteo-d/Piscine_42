/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdrouin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:33:19 by mdrouin           #+#    #+#             */
/*   Updated: 2022/01/15 19:27:51 by mdrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	write_on_screen(char hundreds, char dozens, char units, char comma)
{
	write(1, &hundreds, 1);
	write(1, &dozens, 1);
	write(1, &units, 1);
	if (hundreds < '7')
	{
		write(1, &comma, 1);
	}
}

void	ft_print_comb(void)
{
	char	hundreds;
	char	dozens;
	char	units;
	char	comma;

	hundreds = '0';
	dozens = '1';
	units = '2';
	comma = ',';
	while (hundreds < '7')
	{
		while (dozens < '8')
		{
			while (units < '9')
			{
				write_on_screen(hundreds, dozens, units, comma);
				units++ ;
			}
			dozens++ ;
			write_on_screen(hundreds, dozens, units, comma);
		}
		hundreds++ ;
		write_on_screen(hundreds, dozens, units, comma);
	}
}
