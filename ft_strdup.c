# include "libft.h"

static void *safe_malloc(size_t size)
{
	void *ptr = malloc(size);
	if (ptr == NULL) 
		{
			//exit(EXIT_FAILURE); // Exit if memory allocation fails
			return (NULL);
		}
    return ptr;
}



char *ft_strdup(const char *s)
{
//calculate size of source string in bytes (including null term),
//assign an size_t var and set it to size of source. 
// malloc the mem according to size above.
// strlcpy the source to allocated memory location.
//return pointer of allocated memory.
	size_t		buffer_size;
	char		*ptr;
	
	buffer_size = ft_strlen(s)+1;
	ptr = safe_malloc(buffer_size);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, buffer_size);
	return(ptr);
}
