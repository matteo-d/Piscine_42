#include<stdio.h>
#include<unistd.h>
char	*ft_strupcase(char *str)	
{
        int     i;
        i = 0;
        while(str[i] != '\0')
        {
		if ((str[i] > 96) && (str[i] < 123))
		       	
                {
                       str[i] = str[i]- 32;
                }
        i++ ;
        }
        return(str);
}


int     main()
{
        char    str[] = "aDa8q*sad";
	
        printf("Lowercase to uppercase\n ");

	printf("Before : %s\n", str);

	*str = *ft_strupcase(str);

	printf("After : %s \n", str);
        
        return(0);
}
