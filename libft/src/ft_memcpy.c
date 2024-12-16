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
/*
#include <stdio.h>

#include <string.h> // For comparison with standard memcpy

#include <stdlib.h> // For malloc and free


void *ft_memcpy(void *dst, const void *src, size_t n); // Declaration of your memcpy function


int main() {

    // Test 1: Basic copy of an array

    char src1[] = "Hello, World!";

    char dst1[20]; // Ensure enough space for the copied string


    ft_memcpy(dst1, src1, strlen(src1) + 1); // +1 to include the null terminator

    printf("Test 1 - Basic Copy: %s\n", dst1);


    // Test 2: Copying a smaller array

    char src2[] = "Test";

    char dst2[10];


    ft_memcpy(dst2, src2, strlen(src2) + 1);

    printf("Test 2 - Smaller Array Copy: %s\n", dst2);


    // Test 3: Copying with NULL pointers

    char *null_src = NULL;

    char *null_dst = NULL;


    if (ft_memcpy(null_dst, null_src, 10) == NULL) {

        printf("Test 3 - NULL Pointer Check: Passed\n");

    } else {

        printf("Test 3 - NULL Pointer Check: Failed\n");

    }


    // Test 4: Overlapping memory (not safe with ft_memcpy)

    char overlap[] = "Overlap Test";

    printf("Before overlapping copy: %s\n", overlap);

    ft_memcpy(overlap + 5, overlap, 8); // This is unsafe; just for demonstration

    printf("Test 4 - Overlapping Copy (unsafe): %s\n", overlap);


    // Test 5: Large data copy

    char *large_src = malloc(100);

    char *large_dst = malloc(100);

    if (large_src == NULL || large_dst == NULL) {

        printf("Memory allocation failed\n");

        return 1;

    }

    memset(large_src, 'A', 99); // Fill with 'A's

    large_src[99] = '\0'; // Null-terminate


    ft_memcpy(large_dst, large_src, 100);

    printf("Test 5 - Large Data Copy: %s\n", large_dst);


    // Free allocated memory
*/

    free(large_src);

    free(large_dst);


    return 0;

}
