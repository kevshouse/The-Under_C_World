#include "libft.h"

static	int snip(const char *set, char c)
{
	int		i;
	
	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*scratch_buffer(const char *s1, size_t start, size_t len)
{
	char *str;
	size_t	i;
	
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	
	i = 0;
	j = ft_strlen(s1) - 1;
	if (j < 1)
		return(ft_strdup(""));
	/*
	 locate preamble (leading char) of keep_string 
	"s1[i]) && s1[i]"  Bounds checking.
	*/
	while (snip(set, s1[i]) && s1[i])
		i++;
	 /*
	 locate postamble (tail char) of keep_string.
	 again with bounds check.
	 */
	while (snip(set, s1[j]) && j > i)
		j--;
	return (scratch_buffer(s1, i, j - i + 1));
}
