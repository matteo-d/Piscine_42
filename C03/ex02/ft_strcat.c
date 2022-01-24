#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++ ;
	}
	return (i);
}

char *ft_strcat(char *dest, char *src)
{
	
	int size;
	int i;
	int j;
	
	size = ft_strlen(dest) + ft_strlen(src);
	i = -1;
	j = 0;

	char	temp_char[size];
	
	
	while (dest[++i] != '\0')
	{
		temp_char[j] = dest[i];
		j++ ;
	}	
		
	i = -1;
	while (src[++i] != '\0')
	{
		temp_char[j] = src[i];
		j++ ;
	}
	
 	temp_char[j + 1] = '\0';
	dest = temp_char;

	printf("%s", dest);
	return (dest);
}

int	main()
{
	char	dest[] = "Hey comment";
	char	src[] = " tu vas ?";

	
	 ft_strcat(dest, src);
	printf("%s", dest);

	return (0);
}

/* Cette fonction permet de rajouter à une chaîne de caractères déjà existante le contenu d'une seconde. Autrement dit de concaténer les contenu de deux chaînes de caractères, mais le résultat sera stocké dans la première chaîne passé en paramètre (aucune nouvelle chaîne ne sera produite). Bien entendu le bloc de mémoire devant recevoir le contenu à concaténer doit être alloué de manière à être suffisament grand pour contenir la totalité des deux chaînes caractères. */
