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

char	*ft_strcapitalize(char *str)
{	//Everything Uppercase
	*str = *ft_strupcase(str);
	int	i;
	i = 0;	
	 while(str[i] != '\0')
        { //If last char is uppercase 
		 if (str[i -1 ] > 64 && < 91 )
		 {
			str[i + 32] = str[i] + 32;
		 }

        i++ ;
        }


	return(str);
}

int	main()
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	*str = *ft_strcapitalize(str);
	
	int	i;
	i = 0;
	while(i < 40){
	write(1, &str[i], 1);
	i++; };	
}
