#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t src_len = 0;
    size_t cpy_len;

    // Calculate the length of the source string
    while (src[src_len] != '\0')
    {
        src_len++;
    }

    // Calculate the number of characters to copy
    if (size > 0)
    {
        // Ensure we do not copy more than the size - 1
        cpy_len = (src_len >= size) ? size - 1 : src_len;

        // Copy the characters from src to dest
        size_t i;
        for (i = 0; i < cpy_len; i++)
        {
            dest[i] = src[i];
        }
        // Null-terminate the destination string
        dest[cpy_len] = '\0';
    }

    return src_len; // Return the length of the source string
}
