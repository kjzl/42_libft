/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwurster <kwurster@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:17:57 by kwurster          #+#    #+#             */
/*   Updated: 2024/04/02 05:51:42 by kwurster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

typedef long long t_ll;
typedef unsigned long long t_ull;

/*
	LIBC
*/

int				ft_atoi(const unsigned char *nptr);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_realloc(void *ptr, size_t from, size_t to);
void			*ft_reallocarray(void *ptr, size_t from, size_t nmemb, size_t size);
unsigned char	*ft_reallocstring(unsigned char *ptr, size_t to);
int				ft_tolower(int c);
int				ft_toupper(int c);

/*
	GNL
*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif

unsigned char	*get_next_line(int fd);

/*
	LIST
*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef t_bool	(*t_lst_pred)(t_list*, void*);

t_list	*ft_lst_first_where(t_list *lst, t_lst_pred pred, void *pred_data);
t_list	*ft_lst_first_where_next(t_list *lst, t_lst_pred pred, void *pred_data);
void	ft_lstadd_back(t_list **lst, t_list *node);
void	ft_lstadd_front(t_list **lst, t_list *node);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdel_first(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstswp_front_where(t_list **lst, t_lst_pred pred, void *pred_data);
// void	ft_lstswp_front(t_list **lst, t_list *node, t_list *prev);

/*
	MATH
*/

t_ull	ft_abs(t_ll num, t_ll min);
t_ll	ft_max(t_ll a, t_ll b);
t_ll	ft_min(t_ll a, t_ll b);
t_bool	ft_safe_mult(t_ll a, t_ll b, t_ll max, t_ll *result);
t_bool	ft_safe_umult(t_ull a, t_ull b, t_ull max, t_ull *result);
t_ull	ft_umax(t_ull a, t_ull b);
t_ull	ft_umin(t_ull a, t_ull b);

/*
	OTHER
*/

size_t	ft_putchar_fd(unsigned char c, int fd);
size_t	ft_putendl_fd(unsigned char *s, int fd);
size_t	ft_putfill_fd(unsigned char c, int fd, size_t fill);
size_t	ft_putnbr_fd(int n, int fd);
size_t	ft_putstr_fd(unsigned char *s, int fd);
void	set_bit_as(unsigned char *byte, unsigned char pos, t_ll bool);
void	set_bit(unsigned char *byte, unsigned char pos);
void	unset_bit(unsigned char *byte, unsigned char pos);
void	toggle_bit(unsigned char *byte, unsigned char pos);
t_bool	get_bit(unsigned char byte, unsigned char pos);
t_bool	itob(t_ll i);

/*
	STRING GENERIC
*/

unsigned char	*ft_itoa(int n);
unsigned char	**ft_split(const unsigned char *s, unsigned char c);
unsigned char	*ft_str_notchr(const unsigned char *s, int c);
unsigned char	*ft_strchr(const unsigned char *s, int c);
int				ft_strcmp(const unsigned char *s1, const unsigned char *s2);
size_t			ft_strdist(const unsigned char *start, const unsigned char *end);
unsigned char	*ft_strdup(const unsigned char *s);
void			ft_striteri(unsigned char *s, void (*f)(unsigned int, unsigned char*));
unsigned char	*ft_strjoin(const unsigned char *s1, const unsigned char *s2);
size_t			ft_strlcat(unsigned char *dst, const unsigned char *src, size_t size);
size_t			ft_strlcpy(unsigned char *dst, const unsigned char *src, size_t size);
size_t			ft_strlen(const unsigned char *s);
unsigned char	*ft_strmapi(const unsigned char *s, unsigned char (*f)(unsigned int, unsigned char));
int				ft_strncmp(const unsigned char *s1, const unsigned char *s2, size_t n);
unsigned char	*ft_strndup(const unsigned char *s, size_t len);
unsigned char	*ft_strnstr(const unsigned char *big, const unsigned char *little, size_t len);
unsigned char	*ft_strr_notchr(const unsigned char *s, int c);
unsigned char	*ft_strrchr(const unsigned char *s, int c);
unsigned char	*ft_strtrim(const unsigned char *s1, const unsigned char *set);
unsigned char	*ft_substr(const unsigned char *s, unsigned int start, size_t len);
// void	str_map(t_str *str, void (*f)(unsigned char*));
// void	str_mapi(t_str *str, void (*f)(size_t, unsigned char*));
// void	str_map_rev(t_str *str, void (*f)(unsigned char*));
// void	str_mapi_rev(t_str *str, void (*f)(size_t, unsigned char*));
// // TODO: use recursive algorithm for str_filter_map to avoid quadratic complexity and make generic (unsigned char* input)
// void	str_filter_map(t_str *str, t_bool (*f)(unsigned char*));
// void	str_filter_mapi(t_str *str, t_bool (*f)(size_t, unsigned char*));
// void	str_filter_map_rev(t_str *str, t_bool (*f)(unsigned char*));
// void	str_filter_mapi_rev(t_str *str, t_bool (*f)(size_t, unsigned char*));

/*
	STRING
*/

# include "string/str.h"

/*
	PRINTF
*/

// int		ft_printf(const unsigned char *format, ...);

#endif
