#include<stdio.h>

int     ft_str_is_uppercase(char *str)
{
        int     i;
        i = 0;
        while(str[i] != '\0')
        {
                if (!((str[i] > 64) && (str[i] < 91)))
                {
                        return(0);
                }
        i++ ;
        }
        return(1);
}


int     main()
{
        char    text[] = "ADDD";
        char    nottext[] = "Ceci123estdutexte";
        char    lol[] = "&^%$#";
        
        int     response;

        printf("RULES : 1 egal ONLY uppercase , 0 egal NOT ONLY uppercase \n ");

        response = ft_str_is_uppercase(text);
        printf("First sentence %d\n", response);
        response = ft_str_is_uppercase(nottext);
        printf("Second sentence %d\n", response);
        response = ft_str_is_uppercase(lol);
        printf("Third sentence %d\n", response);
        
        return(0);
}

