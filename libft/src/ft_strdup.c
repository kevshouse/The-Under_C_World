# include "libft.h"

char *ft_strdup(const char *s)
{
//calculate size of source string in bytes (including null term),
//assign an size_t var and set it to size of source. 
// malloc the mem according to size above.
// strcpy the source to allocated memory location.
//return pointer of allocated memory.
	size_t		buffer_size;
	char		*ptr;
	
	buffer_size = (sizeof(char) * (ft_strlen(s)+1));
	ptr = malloc(buffer_size);
	strcpy(ptr, s);
	return(ptr);
}
