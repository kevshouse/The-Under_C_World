#include "libft.h"

/* check if small is empty */
        /* return big */
    /* loop over haystack */
        /* while current character of haystack is equal to the corresponding
         * character in needle */
             /* check if we have the complete needle 
             
          RETURN VALUES
If little is an empty string, big is returned; if little occurs nowhere
     in big, NULL is returned; otherwise a pointer to the first character of
     the first occurrence of little is returned.
   
              */

#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    // Check if needle is NULL or empty
    if (needle == NULL || needle[0] == '\0')
        return (char *)haystack;

    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0; // Reset j for each new position in haystack
        while (haystack[i + j] == needle[j] && (i + j) < len)
        {
            if (needle[j + 1] == '\0') // If we reached the end of needle
                return (char *)(haystack + i);
            j++;
        }
        i++;
    }
    return NULL; // Return NULL if needle is not found
}
