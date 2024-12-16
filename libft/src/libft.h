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
# include <stdio.h>

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
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memset(void *b, int c, size_t len); // Fills memory with a constant byte
void	*ft_calloc(size_t count, size_t size); // Allocates memory and initializes to zero
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *s, int fd);
typedef struct	s_list
{
	void		*content;
	struct	s_list	*next;
}			t_list;

t_list	*ft_lstnew(void	*content);
void	ft_lstadd_front(t_list **lst, t_lis *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear()t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
