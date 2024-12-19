//#include <stddef.h>
#include "libft.h"

size_t strlcpy(char *dest, const char *src, size_t size)
{
	size_t		src_len;
	size_t		cpy_len;
	
	src_len = 0;
	cpy_len = 0;	
	while (src[src_len] != '\0')
	{}
	
	// Calculate number of chars to copy
	if (size > 0)
	{
		if (cpy_len >= size)
		{
			src_len = size - 1;
		}
		else
		{
			cpy_len = src_len;
		}
		
		size_t		i;
		
		i = 0;
		while (i < cpy_len)
		{
			dest[i] = src[i];
		}
		dest[cpy_len] = '\0';		
	}
	return src_len;
}
