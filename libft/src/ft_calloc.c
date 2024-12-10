/*
Steps
Function Definition:
The function ft _calloc() takes two parameters: num_elements (the number of elements to allocate) and size_of_each_element (the size of each element).

Memory Allocation: 
It calculates the total size needed and uses malloc() to allocate that amount of memory.

Error Checking: 
If malloc() returns NULL, indicating that the allocation failed, the function returns NULL.

Memory Initialization: 
If the allocation is successful, it uses memset() to set all bytes in the allocated memory to zero.

Return Pointer: 
Finally, it returns the pointer to the allocated and initialized memory.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // For memset
//#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	//Work out total size required
	size_t		size_total;
	
	size_total = size * count;
	
	//Allocat mem
	void *ptr = malloc(size_total);
	
	if (ptr == NULL)
		return NULL;
		
	// Init allocated mem with zero
	//ft_memset(ptr, 0, size_total);
	memset(ptr, 0, size_total);
}
