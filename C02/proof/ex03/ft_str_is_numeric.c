#include<stdio.h>

int     ft_str_is_numeric(char *str)
{
        int     i;
        i = 0;
        while(str[i] != '\0')
        {
                if (!((str[i] > 47) && (str[i] < 58)))  
                {
                        return(0);
                }
        i++ ;
        }
        return(1);
}


int     main()
{
        char    text[] = "Asaqsad";
        char    nottext[] = "Ceci123estdutexte";
        char    lol[] = "&^%$#";
	char    num[] = "123";

        
        int     response;

        printf("RULES : 1 egal ONLY numeric , 0 egal NOT ONLY numeric \n ");

        response = ft_str_is_numeric(text);
        printf("First %d\n", response);
        response = ft_str_is_numeric(nottext);
        printf("Second %d\n", response);
        response = ft_str_is_numeric(lol);
        printf("Third %d\n", response);
        response = ft_str_is_numeric(num);
        printf("Fourth %d\n", response); 
        return(0);
}
