/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:16:44 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 17:13:31 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		handle_memory_error(char **buffer, size_t i);
static char		*get_next_token(const char **s, char c);

static int	process_token(char **buffer, const char **s, char c, size_t *i)
{
	buffer[*i] = get_next_token(s, c);
	if (!buffer[*i])
	{
		handle_memory_error(buffer, *i);
		return (0);
	}
	(*i)++;
	return (1);
}

static void	handle_memory_error(char **buffer, size_t i)
{
	while (i > 0)
		free(buffer[--i]);
	free(buffer);
}

static void	*safe_malloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

static char	*get_next_token(const char **s, char c)
{
	const char	*start = *s;
	char		*token;
	size_t		length;

	length = 0;
	while (**s && **s == c)
	{
		(*s)++;
	}
	start = *s;
	while (**s && **s != c)
	{
		length++;
		(*s)++;
	}
	token = safe_malloc(length + 1);
	if (!token)
		return (NULL);
	ft_strlcpy(token, start, length + 1);
	return (token);
}

static size_t	count_tokens(const char *s, char c)
{
	size_t	count;
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
	return (count);
}

char	**ft_split(const char *s, char c)
{
	size_t token_count;
	size_t i;
	char **buffer;

	i = 0;
	if (!s)
		return (NULL);
	token_count = count_tokens(s, c);
	buffer = safe_malloc((token_count + 1) * sizeof(char *));
	if (!buffer)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			if (!process_token(buffer, &s, c, &i))
				return (NULL);
		}
		else
			s++;
	}
	buffer[i] = NULL;
	return (buffer);
}
