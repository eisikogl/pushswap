/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:09:33 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 20:21:42 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
	{
		return (NULL);
	}
	new->content = (void *)content;
	new->next = NULL;
	return (new);
}

// int main(void)
// {
//     char l[] = "hello";
//     printf("%s",ft_lstnew(l)->content);
//     return (0);
// }