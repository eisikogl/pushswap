/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:56:11 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 20:53:49 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// void f(char *str)
// {
// 	printf("%s", str);
// }
//  int main(void)
//  {
//      t_list *new;
//      new = ft_lstnew("arif");
// 		 ft_lstadd_back(&new, ft_lstnew("emre"));
// 		 ft_lstiter(new, (void *)f);
//				ft_lstadd_front(&new, ft_lstnew("kocoglu"));
//    ft_lstiter(list, (void *)f)
//      return (0);
//  }