#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr = (unsigned char *)s;
	unsigned char value = (unsigned char)c;
	size_t		i;
	
	i = 0;	
	while (i < n)
	{
		ptr[i] = value;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int main() {
    char buffer[10];

    // Use the custom memset function to fill the buffer with 'A'
    ft_memset(buffer, 'A', sizeof(buffer));

    // Print the buffer contents
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%c ", buffer[i]); // Output: A A A A A A A A A A
    }
    printf("\n");

    return 0;
}
*/
