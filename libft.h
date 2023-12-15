/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftower-p <ftower-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:35:53 by ftower-p          #+#    #+#             */
/*   Updated: 2023/09/06 17:04:41 by ftower-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Includes
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

// Definitions
# define TRUE 1
# define FALSE 0

// Linked List
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// Function definitions
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);

int					ft_tolower(int c);
int					ft_toupper(int c);

char				*ft_strchr(char const *str, int c);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strdup(char const *src);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dest, const char *src, size_t n);
size_t				ft_strlcpy(char *dest, char const *src, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(char const *haystack, char const *needle,
						size_t n);
char				*ft_strrchr(const char *str, int c);
char				*ft_strtrim(char const *s1, char const *set);

void				ft_bzero(void *pointer, size_t count);
void				*ft_memset(void *pointer, int character, size_t count);
void				*ft_memchr(void const *str, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t len);
int					ft_memcmp(void const *s1, void const *s2, size_t n);

void				*ft_calloc(size_t count, size_t n);
char				*ft_strnstr(char const *haystack, char const *needle,
						size_t n);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				**ft_split(char const *s, char c);

int					ft_atoi(const char *str);
char				*ft_itoa(int n);

void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);

void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));

void				ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif