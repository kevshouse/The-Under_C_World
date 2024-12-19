#include <stddef.h>
int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t		i;
	
	i = 0;
	while (i <= n)
	{
		if (str1[i] != str2[i])
		{
			return (unsigned char) str2[i] - (unsigned char) str2[i];
		}
		if (str1[i] == '\0')
		{
			return 0;
		}
		i++;
	}
	return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, everyone!";
    
    // Compare the first 5 characters of str1 and str2
    int result = ft_strncmp(str1, str2, 5);
    
    if (result == 0) {
        printf("The first 5 characters are equal.\n");
    } else if (result < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");
    }

    return 0;
}
