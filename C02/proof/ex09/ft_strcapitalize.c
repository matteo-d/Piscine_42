/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdrouin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 00:03:22 by mdrouin           #+#    #+#             */
/*   Updated: 2022/01/23 01:23:41 by mdrouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 96) && (str[i] < 123))
		{
			str[i] = str[i] - 32;
		}
		i++ ;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	*str = *ft_strupcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] > 64) && (str[i] < 91))
			if (((str[i + 1] > 64) && (str[i + 1] < 91)))
				str[i + 1] = str[i + 1] + 32;
		if ((str[i] > 96) && (str[i] < 123))
			if (((str[i + 1] > 64) && (str[i + 1] < 91)))
				str[i + 1] = str[i + 1] + 32;
		if ((str[i] > 47) && (str[i] < 58))
			if (((str[i + 1] > 64) && (str[i + 1] < 91)))
				str[i + 1] = str[i + 1] + 32;
		i++ ;
	}
	return (str);
}

int		main(void)
{
	
char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquantes+et+un";
	
	int	i;

	i = 0;
	*str = *ft_strcapitalize(str);
	write(1, str, 62);
	return (0);
}
