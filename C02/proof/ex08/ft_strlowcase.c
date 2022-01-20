#include<stdio.h>
#include<unistd.h>

char	*ft_lowcase(char *str)	
{
        int     i;
        i = 0;
        while(str[i] != '\0')
        {
		if ((str[i] > 64) && (str[i] < 91))
		       	
                {
                       str[i] = str[i] + 32;
                }
        i++ ;
        }
        return(str);
}


int     main()
{
        char    str[] = "aDa8q*DaD";
	
        printf("Uppercase to Lowercase\n ");

	printf("Before : %s\n", str);

	*str = *ft_lowcase(str);

	printf("After : %s \n", str);
        
        return(0);
}

