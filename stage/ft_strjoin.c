#include "libft.h"

static void *safe_malloc(size_t size)
{
	void *ptr = malloc(size);
	if (ptr == NULL) 
		{
			//exit(EXIT_FAILURE); // Exit if memory allocation fails
			return (NULL);
		}
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len1;
	size_t		len2;
	
	if (!s1 && !s2)
		return (NULL);
	if (s1 && !s2)
		//Do some good stuff on data from s1;
		return (ft_strdup(s1));
	if (!s1 && s2)
	//Do some good stuff on data from s2;
		return (ft_strdup(s2));
	//Do some good stuff on data from s1 and s2;
	//get lengths of s1 and s2 into size_t vars
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	// malloc a char var for the malloc
	char *buffer = safe_malloc(len1 + len2 +1);
	if (!buffer) return (NULL);
	strcpy(buffer, s1);
	strcat(buffer, s2);
	
	return (buffer);
}


