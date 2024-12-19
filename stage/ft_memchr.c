#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;

	unsigned char	uns_c;
	/* const as we are not altering data */
	const unsigned char *buff;

	uns_c = (unsigned char)c;
		/* casting */
	buff = (const unsigned char *)s;
	
	i = 0;
	while(i < n)
	{
		if (buff[i] == uns_c)
		{
			/*  return a void pointer to found char */
			/* 'buff + i' is same as '&buff[i]' */
			return ((void*) (buff +i));
		}
		i++;
	}
/* If char not found we return NULL */
return (NULL);
}
