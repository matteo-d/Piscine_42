#include<stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	i = 0;
	int	result;

	while ( (i < n) && (s1[i] != '\0') )
	{
		if(s1[i] != s2[i])
		{
			printf("%c\n", s1[i]);
                	printf("%c\n", s2[i]);
			result = s1[i] - s2[i];
		       return(result);	
		}
		i++ ;
	}
	result = 0;
	return(result);
}


int	main()
{
	unsigned int	n;
	char	hello[] = "heppaooooooooooo";
	char bonjour[] = "heppiiiiiiiiiiiii";
	
	n = 8;
	
	int	result;	

	result = ft_strncmp(hello, bonjour, n);
	

	printf("response : %d\n", result);
	
	return(0);
}
