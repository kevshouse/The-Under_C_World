/* Function purpose: split stings
/* from https://medium.com/@piolodale/libft-42-cursus-871329cc51d3#id_token=eyJhbGciOiJSUzI1NiIsImtpZCI6IjU2NGZlYWNlYzNlYmRmYWE3MzExYjlkOGU3M2M0MjgxOGYyOTEyNjQiLCJ0eXAiOiJKV1QifQ.eyJpc3MiOiJodHRwczovL2FjY291bnRzLmdvb2dsZS5jb20iLCJhenAiOiIyMTYyOTYwMzU4MzQtazFrNnFlMDYwczJ0cDJhMmphbTRsamRjbXMwMHN0dGcuYXBwcy5nb29nbGV1c2VyY29udGVudC5jb20iLCJhdWQiOiIyMTYyOTYwMzU4MzQtazFrNnFlMDYwczJ0cDJhMmphbTRsamRjbXMwMHN0dGcuYXBwcy5nb29nbGV1c2VyY29udGVudC5jb20iLCJzdWIiOiIxMDMwMjU5MDc0NjMwMDM5NTQ5ODIiLCJlbWFpbCI6ImtldnNob3VzZUBnbWFpbC5jb20iLCJlbWFpbF92ZXJpZmllZCI6dHJ1ZSwibmJmIjoxNzM0Mzg1NTkzLCJuYW1lIjoiS2V2aW4gQW5kZXJzb24iLCJwaWN0dXJlIjoiaHR0cHM6Ly9saDMuZ29vZ2xldXNlcmNvbnRlbnQuY29tL2EvQUNnOG9jTFpBVWNZdlo1OGp5U293YWh4a2I5NTBFaTRmNVFEcV8yRGtxRnNYMnZRbGQ0Vng1TkU9czk2LWMiLCJnaXZlbl9uYW1lIjoiS2V2aW4iLCJmYW1pbHlfbmFtZSI6IkFuZGVyc29uIiwiaWF0IjoxNzM0Mzg1ODkzLCJleHAiOjE3MzQzODk0OTMsImp0aSI6IjYzMzhjNTRkMmZjNmZkMGM1Y2U3ODhlYzRjODgyMWQ3MGM4NWJkMDgifQ.bDkSeQx9QQrZ449tzyIDdgch-7u6XChXkUascpUaZCT50p9_F6yAgPgxrKxrI1Q-xG7b9RYvWfwui0H8qp8sb4nwRHv3OdxfgQzKhuwKz0T9Bv08A9-2vLRxwGZBrsBODIwaaz_KehLHLwMk8R8qFinO4tT2AfeRq_t8I6WeKubnQPRJvPF_eCHYTfwO0HhMFp3kyzd447JjVbeHi3-vFXdqefV7TxYUjF6_uZJAK20C06RtE_N8EXeKtUIz_Rkdg1uxgTi6BX6a1TzB409DBzt1iRb1JLnY0gcu7h6BaV9Nq2pRf_poIvlvcWeMkcS5yXrUF5h_71VKOfZhMmrCrQ
ft_split() takes a string and a character. 
The function splits up the string using the specified character as 
a separator, and returns a new array of strings holding the new 
strings which have been split up.

This is the first usage of double pointers/arrays in the 42 cursus. 
We can move through an array of strings using an index, just like how 
we would move through a string. 
We must properly allocate the correct number of pointers, so we
have a function that counts how many strings result from splitting the 
given string with the given character. 
We allocate an additional pointer to null-terminate the double array, 
just like we do with a string.
Example:
	Input:	"Of all the bottles on the bar."
	Output ["Of","all","the","bottles","on","the","bar"]
	
/****************************************************************/
/* FT_SPLIT (simplified)

NAME
    ft_split -- split a string into an array of words
SYNOPSIS
    char **ft_split(const char *s, char c);
DESCRIPTION
    Allocate (with malloc(3)) and returns an array of strings obtained by splitting s with the character c, used as delimiter.
    The returned array must be NUL-terminated.
PARAMETERS
    s: string to split
    c: delimiter character
RETURN VALUES
    ft_split() returns an array of strings resulting from the splitting of s; NULL if the memory allocation failed.
AUTHORIZED EXTERNAL FUNCTIONS
    malloc(3)
	*/

//ft_split.c
#include "libft.h"

char **ft_split(const char *s, char c); //We split on 'c'.

char **ft_split(const char *s, char c)
{
	size_t	token_count; //to keep track of the number of individual words.
	size_t	token_index; //to keep track of the number of chars in a token.
	int		token_entry;
	int		s_index;
	void*	safe_malloc(size_t size)
	{
		if (ptr == NULL)
		{
			//return (-1);
			exit(EXIT_FAILURE); // more standard & portable than return (-1).
		}
		return ptr;
	}
	//Count the tokens function count_token()
	static size_t	count_tokens(const char *s, char c)
	{
		int		count;
		int		inside_tok;in
		
		count = 0;
		inside_tok = 0;
		
		while (*s)
		{
			if (*s != c &&!inside_tok)
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
	//Get_next_token function()
	static char *get_next_token(const char **s, char c)
	{
		const char *start = *s;
		while (**s && **s == c)
			(*s)++;
		return (ft_strndup(start, *s - start))
	}

char **ft_split(const char *s, char c)
{
	int		i;
	int		j;
	size_t	token_count;
	
	if (!s)
		return (NULL);

	char **buffer = safe_malloc((count_tokens + 1) * sizeof(char *));
	if (!buffer)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			buffer[i] = get_next_token)&s, c);
			if (!buffer[i])
			{
				while (j < i)
				{
					free(buffer[j]);
					j++;
				}
			}
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
buffer[i] = NULL;
return (buffer);