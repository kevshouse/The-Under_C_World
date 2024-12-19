#include "libft.h"
static void *safe_malloc(size_t size)
{
	void *ptr = malloc(size);
	if (ptr == NULL) 
		{
			exit(EXIT_FAILURE); // Exit if memory allocation fails
		}
	return (ptr);
}

void	*ft_calloc(size_t count, size_t size)
{
	//Work out total size required
	size_t		size_total;
	
	if (size && count > SIZE_MAX / size)
		return (NULL);
	size_total = size * count;
	//Allocate memory
	//void *ptr = malloc(size_total);
	void *ptr = safe_malloc(size_total);
	
	if (ptr == NULL)
		return (NULL);
		
	// Init allocated mem with zero
	//ft_memset(ptr, 0, size_total);
	memset(ptr, 0, size_total);
	return (ptr);
}
