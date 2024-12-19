/*ft_memcpy                                                     */
/*								*/
/*If (src && dst == NULL), 					*/
/*	return dst						*/
/*Cast both dst and src temp pointers to unsigned '*'		*/
/*Iterate dst tmp '*' --while(NOT reahed (n)			*/
/*Set current byte of dst tmp '*' = curr byte of src tmp '*'	*/
/*Return dst '*'				 		*/
/*Collision check! I need to src is ovelapping with dst, is so, */
/*I must copy in reverse (top down).                            */
/*                                                              */
/*Checking for overlapping memory regions (though the 		*/
/*standard does not guarantee safe behavior for overlapping 	*/
/*regions). 							*/
/*Using optimized assembly instructions or CPU-specific features*/
/*(like SIMD) to perform the copy operation efficiently.        */
/* Looping through the memory in chunks (e.g., copying 4 or 	*/
/* 8 bytes at a time) to minimize the number of memory accesses.*/
/****************************************************************/
#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
				
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;
	size_t		i;
	
	if (dst == NULL || src == NULL)
		return (NULL); 
	
	tmp_src = (unsigned char *)src;
	tmp_dst = (unsigned char *)dst;
	
	i = 0;
	while (i < n)
	{
		tmp_dst[i] = tmp_src[i];
		i++;	
	}
	return dst;
}
