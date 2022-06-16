/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:31:07 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 20:33:28 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void ft_putstr(char *str)
// {
//     int i;
//     i = 0;
//     while (str[i] != '\0')
//     {
//          printf("%c",str[i]);
//          i++;
//     }
// }

// int main(void)
// {
//     t_list *new;

//     ft_lstadd_back(&new, ft_lstnew("arif"));
//     ft_lstadd_back(&new, ft_lstnew("emre"));
//     ft_lstiter(new,(void*)(void*)ft_putstr);
// }