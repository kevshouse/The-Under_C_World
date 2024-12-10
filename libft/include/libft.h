/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:50:25 by keanders          #+#    #+#             */
/*   Updated: 2024/12/04 14:55:05 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <string.h>

/* FUNCTIONS */
int		ft_isalpha(int i); // Checks if character is alphabetic
int		ft_isdigit(int i); // Checks if character is a digit
int		ft_isprint(int i); // Checks if character is printable
int		ft_isalnum(int c); // Checks if character is alphanumeric
int		ft_atoi(const char *str); // Converts string to integer
size_t		ft_strlen(const char *str); // Returns length of string
size_t		ft_strlcpy(char *dest, const char *src, size_t size); // Copies string
char	*ft_strchr(const char *s, int c); // Locates first occurrence of character
char	*ft_strrchr(const char *s, int c); // Locates last occurrence of character
char	*ft_strdup(const char *s); // Duplicates a string
char	ft_tolower(char c); // Converts character to lowercase
char	ft_toupper(char c); // Converts character to uppercase
void	*ft_memset(void *b, int c, size_t len); // Fills memory with a constant byte
void	*ft_calloc(size_t count, size_t size); // Allocates memory and initializes to zero

#endif
