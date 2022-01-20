#include<stdio.h>

int     ft_str_is_lowercase(char *str)
{
        int     i;
        i = 0;
        while(str[i] != '\0')
        {
                if (!((str[i] > 96) && (str[i] < 123)))  
                {
                        return(0);
                }
        i++ ;
        }
        return(1);
}


int     main()
{
        char    text[] = "qsaqsad";
        char    nottext[] = "Ceci123estdutexte";
        char    lol[] = "&^%$#";
        
        int     response;

        printf("RULES : 1 egal ONLY lowercase , 0 egal NOT ONLY lowercase \n ");

        response = ft_str_is_lowercase(text);
        printf("First sentence %d\n", response);
        response = ft_str_is_lowercase(nottext);
        printf("Second sentence %d\n", response);
        response = ft_str_is_lowercase(lol);
        printf("Third sentence %d\n", response);
        
        return(0);
}

