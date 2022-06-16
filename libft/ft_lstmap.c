/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:48:50 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 20:33:15 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*r;

	if (!lst)
		return (0);
	new = 0;
	while (lst)
	{
		r = ft_lstnew(f(lst->content));
		if (r == NULL)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, r);
		lst = lst->next;
	}
	return (new);
}

//  void del(t_list *list)
//  {
//  	free(list);
//  }

//  void f(char *str)
//  {
//  	printf("%s", str);
// }
// int	main(void)
// {
// 	t_list *new;

// 	new = ft_lstnew(ft_strdup("arif"));
// 	ft_lstadd_back(&new, ft_lstnew(ft_strdup("emre")));
// 	ft_lstadd_back(&new, ft_lstnew(ft_strdup("kocoglu")));
// 	ft_lstmap(new, (void *)f, (void *)del);
// 	return (0);
// }