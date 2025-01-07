/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:08:46 by keanders          #+#    #+#             */
/*   Updated: 2025/01/06 18:51:17 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*   ft_calloc()	for memory allocation				      */
/* ************************************************************************** */
/*   Logical breakdown							      */
/*   ft_split() needs to :-						      */
/*   	Compute the wordcount  						      */
/*   	Allocate memory for the a string array				      */
/*   	Split the inpuy string into words based on the delimiters	      */
/*   	Handle memory managment safely and effectively			      */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static char	*get_next_word(const char **s, char c)
{
	const char	*start_marker;
	char		*word;
	size_t		len;

	len = 0;
	start_marker = 0;
	while (**s == c && **s)
		(*s)++;
	if (**s == '\0')
		return (NULL);
	start_marker = *s;
	while (**s && **s != c)
		(*s)++;
	len = *s - start_marker;
	if (len == 0)
		return (NULL);
	word = ft_substr(start_marker, 0, len);
	return (word);
}

static char	**build_result(char **result, const char *s, char c, int numb_words)
{
	int		i;

	i = 0;
	while (i < numb_words)
	{
		result[i] = get_next_word(&s, c);
		if (!result[i])
		{
			while (i > 0)
				free(result[--i]);
			free(result);
			return (NULL);
		}
		i++;
	}
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		numb_words;
	
	if (!s)
		return (NULL);
	numb_words = word_count(s, c);
	result = (char **)ft_calloc(numb_words + 1, sizeof(char *));
	if (!result)
		return (NULL);
	if (build_result(result, s, c, numb_words) == NULL)
		return (NULL);
	return (result);
}
