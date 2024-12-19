#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	// for casting
	unsigned char	uns_c;
	unsigned char *buff;
	
	//casting
	uns_c = (unsigned char)c;
	buff = (unsigned char *)s;
	
	i = 0;
	while(i < n)
	{
		if (buff[i] == uns_c)
			//  return a void pointer
			return ((void*) &buff[i]);
		i++;
	}

return (NULL);
}

#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, World!";
    char arr[] = { 'H', 'e', 'l', 'l', 'o', '\0', 'W', 'o', 'r', 'l', 'd', '!' };

    // Using strchr
    char *result_strchr = strchr(str, 'W');
    if (result_strchr) {
        printf("Found 'W' in string: %s\n", result_strchr);
    } else {
        printf("'W' not found in string.\n");
    }

    // Using memchr
    char *result_memchr = ft_memchr(arr, 'W', sizeof(arr));
    if (result_memchr) {
        printf("Found 'W' in array: %s\n", result_memchr);
    } else {
        printf("'W' not found in array.\n");
    }

    return 0;
}
