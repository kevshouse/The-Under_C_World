/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:50:25 by keanders          #+#    #+#             */
/*   Updated: 2024/12/20 14:42:54 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <limits.h> // For SIZE_MAX and INT_MIN
# include <stdint.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

/* FUNCTIONS */
int		ft_isalpha(int i); // Checks if character is alphabetic
int		ft_isdigit(int c); // Checks if character is a digit
int		ft_isprint(int i); // Checks if character is printable
int		ft_isalnum(int c); // Checks if character is alphanumeric
int		ft_isascii(int c);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
int		ft_atoi(const char *str); // Converts string to integer
int		ft_strncmp(const char *str1, const char *str2, size_t n);
size_t	ft_strlen(const char *str); // Returns length of string
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); //Copies string
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_itoa(int n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strchr(const char *s, int c); // Locates first occurrence of char
char	*ft_strrchr(const char *s, int c); // Locates last occurrence of char
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(const char *s, char c);
char	*ft_strdup(const char *s); // Duplicates a string
char	ft_tolower(char c); // Converts character to lowercase
char	ft_toupper(char c); // Converts character to uppercase
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len); //Fill mem with  constnt byte
void	*ft_calloc(size_t count, size_t size); //Allocate memo & init to zero
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
t_list	*ft_lstnew(void	*content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
