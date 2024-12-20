
#include "libft.h"

static void *safe_malloc(size_t size)
{
    void *ptr = malloc(size);
    if (ptr == NULL) 
    {
        return NULL; // Return NULL if memory allocation fails
    }
    return ptr;
}

static size_t count_tokens(const char *s, char c)
{
    size_t count;
    int		inside_tok;
    
    count = 0;
    inside_tok = 0;

    while (*s)
    {
        if (*s != c && !inside_tok)
        {
            inside_tok = 1;
            count++;
        }
        else if (*s == c)
        {
            inside_tok = 0;
        }
        s++;
    }
    return count;
}

static char *get_next_token(const char **s, char c)
{
    const char *start = *s;
    size_t length;
    
    length = 0;

    // Skip leading delimiters
    while (**s && **s == c)
    {
        (*s)++;
    }
    start = *s; // Start of the token

    // Calculate the length of the token
    while (**s && **s != c)
    {
        length++;
        (*s)++;
    }

    // Allocate memory for the token
    char *token = safe_malloc(length + 1);
    if (!token)
        return NULL; // Handle memory allocation failure

    ft_strlcpy(token, start, length + 1); // Copy the token including the null terminator
    return token; // Return the token
}

char **ft_split(const char *s, char c)
{
    size_t token_count;
    size_t	i;
    char **buffer;
        
    i = 0;

    if (!s)
    {
        return NULL;
    }
    token_count = count_tokens(s, c);
    buffer = safe_malloc((token_count + 1) * sizeof(char *));
    if (!buffer)
    {
        return NULL; // This should not happen due to safe_malloc
    }

    while (*s)
    {
        if (*s != c)
        {
            buffer[i] = get_next_token(&s, c);
            if (!buffer[i])
            {
                // Free previously allocated tokens
                while (i > 0)
                {
                    free(buffer[--i]);
                }
                free(buffer);
                return NULL;
            }
            i++;
        }
        else
        {
            s++;
        }
    }
    buffer[i] = NULL; // Null-terminate the array
    return buffer;
}

