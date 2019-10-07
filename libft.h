/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <mirivera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 11:17:33 by mirivera          #+#    #+#             */
/*   Updated: 2019/10/06 17:06:13 by mirivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include "get_next_line.h"
# include "ft_printf/headers/ft_printf.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** String manipulation
*/

size_t				ft_strlen(const char *str);
void				ft_putchar(char c);
void				ft_putstr(const char *str);
int					ft_intputchar(char c);
int					ft_intputstr(char *str);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, \
							const char *s2, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strdup(const char *src);
char				*ft_strndup(const char *src, int n);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, \
							const char *needle, size_t len);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_srch_rep(char *s, char c, char d);
char				*ft_strrev(char *str);
char				*ft_insertchar(char *formstr, char c, int x);

/*
** Memory
*/

void				ft_bzero(void *s, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dst, \
							const void *src, size_t n);
void				*ft_memccpy(void *dst, \
							const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memset(void *b, int c, size_t len);

/*
** File descriptor functions
*/

void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					ft_intputchar_fd(char c, int fd);
int					ft_intputstr_fd(char const *s, int fd);

/*
** String memory allocation, deallocation
*/

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);

/*
** Identify char functions
*/

int					ft_atoi(const char *str);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isspace(int i);
int					ft_numlen(int number);

/*
** Pointer to function
*/

void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char(*f)(unsigned int, char));

/*
** String comparison
*/

int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

/*
** Linked Lists
*/

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** Linked Lists
*/

int					get_next_line(const int fd, char **line);
void				ft_prefixchar(char prefix, char *str);
char				*ft_prependchar(char c, char *str);

/*
** integer to ascii, base number conversion functions
*/

char				*ft_itoa(int n);
char				*ft_uitoa(unsigned long int n);
char				*ft_itoa_base(int64_t num, int base, int i);
char				*ft_uitoa_base(uint64_t num, char *str, int base, int i);
char				*ft_itoa_base_up(int64_t num, char *str, int base, int i);
char				*ft_llitoa(long long int n);
char				*ft_ullitoa(unsigned long long int n);
char				*ft_llitoa_base(long long int num, \
							char *str, int base, int i);
void				ft_chartobits(char c);
void				ft_strtobinary(char *str);

#endif
