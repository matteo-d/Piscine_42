#include<stdio.h>

	char *ft_strncpy(char *dest, char *src, unsigned int n)
           {
               unsigned int	i;
	       i = 0;

	       while(i < n && src[i] != '\0')
	       {
		 dest[i] = src[i];
		 i++ ;
	       }
	       while (i < n)
		{
		  dest[i] = '\0';
		  i++;
		}
               return dest;
           }

void	main()
{
	char	src[] = "ex01";
	char	dest[6];

	ft_strncpy(dest, src, 123);
	printf("%s\n", dest);
}
