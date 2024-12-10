//Handles overlapping emory poorly

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
	//unsigned char *tmp_src = (unsigned char *)src;
	//unsigned char *tmp_dst = (unsigned char *)dst;
	char *d = (char *)dst;
	const char *s = (const char *)src;
	
	if (d == s || n== 0)
	{
		return dst;
	}
	
	if (d < s)
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	else
	{
		s += n; //move to end of src
		d += n; //move to end of dst
		while (n-- > 0) // copy reverse
		{
			*(--d) = *(--s);
		}
	}
	return dst;
}

#include <stdio.h>
#include <string.h> // For memcpy
#include <stdlib.h> // For malloc and free

void *ft_memmove(void *dest, const void *src, size_t n); // Declaration of your ft_memmove function

int main() {
    // Test 1: Basic copy of a string
    char src1[] = "Hello, World!";
    char dst1[20]; // Ensure enough space for the copied string

    ft_memmove(dst1, src1, strlen(src1) + 1); // +1 to include the null terminator
    printf("Test 1 - Basic Copy (ft_memmove): %s\n", dst1);

    // Using standard memcpy for comparison
    char dst1_copy[20];
    memcpy(dst1_copy, src1, strlen(src1) + 1);
    printf("Test 1 - Basic Copy (memcpy): %s\n", dst1_copy);

    // Test 2: Copying a smaller string
    char src2[] = "Test";
    char dst2[10];

    ft_memmove(dst2, src2, strlen(src2) + 1);
    printf("Test 2 - Smaller String Copy (ft_memmove): %s\n", dst2);

    char dst2_copy[10];
    memcpy(dst2_copy, src2, strlen(src2) + 1);
    printf("Test 2 - Smaller String Copy (memcpy): %s\n", dst2_copy);

    // Test 3: Overlapping memory (safe with ft_memmove)
    char overlap[] = "Overlap Test";
    printf("Before overlapping copy: %s\n", overlap);
    ft_memmove(overlap + 5, overlap, 8); // This is safe with ft_memmove
    printf("Test 3 - Overlapping Copy (ft_memmove): %s\n", overlap);

    // Using standard memcpy for comparison (not safe)
    char overlap_copy[] = "Overlap Test";
    printf("Before overlapping copy (memcpy): %s\n", overlap_copy);
    memcpy(overlap_copy + 5, overlap_copy, 8); // This is unsafe; just for demonstration
    printf("Test 3 - Overlapping Copy (memcpy): %s\n", overlap_copy);

    // Test 4: Large data copy
    char *large_src = malloc(100);
    char *large_dst = malloc(100);
    if (large_src == NULL || large_dst == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    memset(large_src, 'A', 99); // Fill with 'A's
    large_src[99] = '\0'; // Null-terminate

    ft_memmove(large_dst, large_src, 100);
    printf("Test 4 - Large Data Copy (ft_memmove): %s\n", large_dst);

    // Using standard memcpy for comparison
    char *large_dst_copy = malloc(100);
    if (large_dst_copy == NULL) {
        printf("Memory allocation failed\n");
        free(large_src);
        free(large_dst);
        return 1;
    }
    memcpy(large_dst_copy, large_src, 100);
    printf("Test 4 - Large Data Copy (memcpy): %s\n", large_dst_copy);

    // Free allocated memory
    free(large_src);
    free(large_dst);
    free(large_dst_copy);
    
    // New overlapping memory test

    char overlap2[] = "Overlap Test";

    printf("Before new overlapping copy: %s\n", overlap2);

    ft_memmove(overlap2, overlap2 + 7, 4); // Move "Test" to the beginning

    printf("Test 4 - New Overlapping Copy (ft_memmove): %s\n", overlap2);


    // Using standard memcpy for comparison (not safe)

    char overlap_copy2[] = "Overlap Test";

    printf("Before new overlapping copy (memcpy): %s\n", overlap_copy2);

    memcpy(overlap_copy2, overlap_copy2 + 7, 4); // This is unsafe; just for demonstration

    printf("Test 4 - New Overlapping Copy (memcpy): %s\n", overlap_copy2);

    return 0;
}

