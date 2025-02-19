#include "libft.h"

int ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
/*
{
	const unsigned char *p1 = (const unsigned char *)ptr1;
	const unsigned char *p2 = (const unsigned char *)ptr2;
	size_t		i;
	
	i = 0;
	while (i++ < n)
	{
		if (p1[i] != p2[i])
		{
			return p1[i] - p2[i];
		}
	}
	return (0);
}	
*/

{
	const unsigned char *p1;//= ptr1;
	const unsigned char *p2;// = ptr2;
	
	p1 = ptr1;
	p2 = ptr2;
	
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);	
}
