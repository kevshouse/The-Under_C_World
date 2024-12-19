# include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;
	
	i = 0;
	/* Protect against NULL pointers */
	if (s == NULL || f == NULL)
	{
		return; 
	}
       	/* Apply function 'f' to the data ar the & of s[i]*/
    	/* != '\0' to protect any NULL Terminator encountered */
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
