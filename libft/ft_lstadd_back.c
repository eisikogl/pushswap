/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:56:11 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 20:57:45 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

// void f (char *str)
// {
// 	printf("%s", str);
// }
//  int main(void)
//  {
// 	 t_list *new;

// 	 new = ft_lstnew("arif");
// 	 ft_lstadd_front(&new,ft_lstnew("emre"));
// 	 ft_lstadd_front(&new,ft_lstnew("kocoglu"));
// 	 ft_lstadd_back(&new,ft_lstnew("aslan"));
// 	 ft_lstiter(new, (void *)f);
//      return (0);
//  }