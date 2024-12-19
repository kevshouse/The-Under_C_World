#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *ptr = (unsigned char *)s;
	size_t		i;
	
	i = 0;
	while(i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int main() {
    char buffer[10];

    // Use the custom bzero function to fill the buffer with zeros
    ft_bzero(buffer, sizeof(buffer));

    // Print the buffer contents
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%d ", buffer[i]); // Output: 0 0 0 0 0 0 0 0 0 0
    }

    return 0;
}
*/
