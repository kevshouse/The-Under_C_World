#include "libft.h"

static void *safe_malloc(size_t size)
{
	void *ptr = malloc(size);
	if (ptr == NULL) 
		{
			return(NULL);
		}
    return ptr;
}
/*Compute the length of the number*/
static int get_length(int n)
{
	int length;
	
	length = 0;			
	if (n <= 0)
		length = 1;
	else
		length = 0;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char *ft_itoa(int n)
{
	int		len;
	
	
	len = get_length(n);
	char *str = (char *)safe_malloc(len + 1);
	/*Possibly redundant with safe_malloc()!*/
	if (!str)
		return (NULL);
	/*NULL term string */
	str[len] = '\0';
	if (n == 0)
	{	/* Zero handler */
		str[0] = '0';
		return (str);
	}	
	if (n < 0)
	{	/* Negative handler */
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{/*	digit to char conversion */
		str[--len] = (n % 10) + '0';
		/* strip last digit */
		n /= 10;
	}
	return (str);
}
