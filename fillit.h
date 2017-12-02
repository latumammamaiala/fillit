/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:19:05 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/02 17:09:48 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
# define BUF_SIZE 4096

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
char	*alc(char *file);
int		c_elem(char *s);
int		c_pezzi(char *s);
char	*mv_left(char *pz);
char	*mv_top(char *pz);
char	*ft_change(char *s, char lett);
char	*mv_tl(char *s, char lett);
t_list   *ft_cut(int pezzi, char *s);
void	print(t_list *block);
t_list	*muovi(t_list *block);
int		ft_small(int pezzi);

t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	*ft_memalloc(size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char   *ft_strnew(size_t size);
# endif
