#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (src[i] != '\0')
		i++ ;
	
	j = 0;
	while (dest[j] != '\0' && j <= size && j <= i)
	{
		dest[i] = src[i];
		i++;	
	}
	dest[j + 1] = '\0';
	return (i);
}


int main()
{
    char src[] = "heyheyhey";
    char dest[] = "hey";
    int length;

    length = ft_strlcpy(dest, src, 9);

    printf("String to copy : '%s' dest : '%s', taille : %d\n",
            src,
            dest,
            length
          );
    return(0);
}
