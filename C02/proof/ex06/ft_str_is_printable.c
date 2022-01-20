#include<stdio.h>

int     ft_str_is_printable(char *str)
{
        int     i;
        i = 0;
        while(str[i] != '\0')
        {
                if ((str[i] < 32) || (str[i] == 127))  
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
        char    lol[] = "\n";
        
        int     response;

        printf("RULES : 1 egal ONLY printable , 0 egal NOT ONLY printable \n ");

        response = ft_str_is_printable(text);
        printf("First sentence %d\n", response);
        response = ft_str_is_printable(nottext);
        printf("Second sentence %d\n", response);
        response = ft_str_is_printable(lol);
        printf("Third sentence %d\n", response);
        
        return(0);
}

