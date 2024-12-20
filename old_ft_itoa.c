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
		if (n == INT_MIN)
		{
		/* 1st digit of INT_MIN is '2' */
			str[1] = '2';
			/* overflow avoidance adjstmnt */
			n = -(n + 2000000000);
			len--;
		}
		else
		{	
		/* force to positive*/
			n = -n;
		}
	}
	while (n > 0)
	{/*	digit to char conversion */
		str[--len] = (n % 10) + '0';
		/* strip last digit */
		n /= 10;
	}
	return (str);
}
