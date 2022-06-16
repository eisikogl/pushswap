/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:24:42 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 20:51:29 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new;

	while ((*lst))
	{
		new = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = new;
	}
}

//  void	del(char *str)
//  {
//  	free(str);
//  }

//  void	a(char *str)
//  {
//  	printf("%s", str);
//  }

//  int	main(void)
//  {
// 	 t_list *new;
// 	 new = ft_lstnew(ft_strdup("arif"));
// 	 ft_lstadd_back(&new,ft_lstnew(ft_strdup("emre")));
// 	 ft_lstadd_back(&new,ft_lstnew(ft_strdup("kocoglu")));
// 	 ft_lstiter(new, (void *)a);
// 	 ft_lstclear(&new,(void *)del);
// 	 ft_lstiter(new->content, (void *)a);
//  	return (0);
//  }