#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t		len1;
	size_t		len2;
	
	if (!s1 && !s2)
		return (NULL);
	if (s1 && !s2)
		return ft_strdup(s1);
	if (!s1 && s2)
		return ft_strdup(s2);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	// malloc a char var for the malloc
	char *buffer = malloc(len1 + len2 +1);
	if (!buffer)
		return (NULL);
	strcpy(buffer, s1);
	strcat(buffer, s2);
	
	return (buffer);
}


