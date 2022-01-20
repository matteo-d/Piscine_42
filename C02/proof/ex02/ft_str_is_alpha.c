
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{	
	int	i;
	i = 0;
	while(str[i] != '\0')
	{	
		if (!((str[i] > 64) && (str[i] < 91)))
		if (!((str[i] > 96) && (str[i] < 123))) 
		{
			return(0);
		}
	i++ ;
	}	
	return(1);
}


int	main()
{
	char	text[] = "Asaqsad";
	char    nottext[] = "123";
	char    lol[] = "&^1%$#";
	
	int 	response;

	printf("RULES : 1 egal ONLY alpha, 0 egal NOT ONLY alpha \n ");

	response = ft_str_is_alpha(text);
	printf("First %d\n", response);
	response = ft_str_is_alpha(nottext);
	printf("Second %d\n", response);
	response = ft_str_is_alpha(lol);
	printf("Third %d\n", response);

	return(0);
}
