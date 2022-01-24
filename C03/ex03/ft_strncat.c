
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

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	size;
	size = ft_strlen(dest) + ft_strlen(src);
	char	temp_char[size];
	int	src_size;
	int	i;
	int	j;

	i = -1;
	j = 0;

	src_size = ft_strlen(src);
	if (src_size < nb)
		src_size = nb;

	while (dest[++i] != '\0')
	{
		temp_char[j] = dest[i];
		j++ ;
	}

	while (src[++i] != '\0')
	{
		temp_char[j] = src[i];
		j++ ;
	}


	return (dest);
}

int	main()
{
	char	dest[] = "Hey comment";
	char	src[] = " tu vas ?";
	
	ft_strncat(dest, src, 22);
	printf("%s", dest);

	return (0);
}
