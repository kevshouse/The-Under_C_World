# include "libft.h"



static void *safe_malloc(size_t size)
{
	void *ptr = malloc(size);
	if (ptr == NULL) 
		{
			exit(EXIT_FAILURE); // Exit if memory allocation fails
		}
    return ptr;
}

static size_t count_tokens(const char *s, char c) {
	size_t count = 0;
	int		inside_tok = 0;

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
	return (count);
}

static char *get_next_token(const char **s, char c)
{
	const char *start = *s;
	size_t length;
	
	//*start = *s;
	length = 0;
	while (**s && **s == c)
	{
		(*s)++;
	}
	start = *s; // Start of the token
	while (**s && **s != c)
	{
		(*s)++;
	}
	start = *s;
	/*calc token len*/
	while (**s && **s != c)
		{
			length++;
			(*s)++;
		}
	char *token = safe_malloc(length + 1);
	ft_strncpy(token, start, length);
	token[length] = '\0';
	return (token); // Duplicate the token
}

char **ft_split(const char *s, char c)
{
	size_t	token_count;
	size_t	i = 0;
	size_t	j = 0;
	char	**buffer;

	if (!s)
	{
		return (NULL);
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
				while (j < i)
				{
					free(buffer[j]);
					j++;
				}
				//
			free(buffer);
			return (NULL);
			}
			i++;
		}
		else
        	{
            		s++;
        	}
	}
	buffer[i] = NULL; // Null-terminate the array
	return (buffer);
}

