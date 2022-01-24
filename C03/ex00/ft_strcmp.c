#include <stdio.h>
#include <string.h>
int 	ft_strcmp(char *s1, char *s2)
{
	int	i;
	i = 0;
	int	result;

	while ((s1[i] != '\0') )
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

int	main ()
{
	char	dest[] = "heppo";
	char  source[] = "heppo";
	int	result;	
	result = ft_strcmp(dest, source);
	printf("response : %d\n", result);
	return(0);
}
/*
 DESCRIPTION
       The strcmp() function compares the two strings s1 and
       s2.  The locale is not taken into account (for a  lo‐
       cale-aware  comparison,  see strcoll(3)).  It returns
       an integer less than, equal to, or greater than  zero
       if  s1  is  found,  respectively, to be less than, to
       match, or be greater than s2.

       The strncmp() function is similar, except it compares
       only the first (at most) n bytes of s1 and s2.

RETURN VALUE
       The  strcmp() and strncmp() functions return an inte‐
       ger less than, equal to, or greater than zero  if  s1
       (or  the  first  n  bytes  thereof) is found, respec‐
       tively, to be less than, to match, or be greater than
       s2.

  */ 
