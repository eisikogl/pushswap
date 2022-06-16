/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:35:18 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 20:37:31 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int main(void)
// {
//     t_list *m;
//     m = ft_lstnew("emre");
//     ft_lstadd_back(&m, ft_lstnew("fatih"));
//     m = ft_lstlast(m);
//     printf("%s",m->content);
//     return (0);
// }