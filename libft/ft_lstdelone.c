/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:18:38 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 20:33:40 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

// void del(void *str)
// {
//     free(str);
// }

// int main(void)
// {
//     t_list *new;
//     new = ft_lstnew("arif");
//     ft_lstadd_back(&new,"emre");
//     ft_lstdelone(new,del);
//     printf("%s",new->content);
//     return (0);
// }