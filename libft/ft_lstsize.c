/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:28:38 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 20:33:21 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

// int main(void)
// {
//     t_list *list;
//  	int uzunluk;
//  	list = ft_lstnew("selam");
//     uzunluk = ft_lstsize(list);
//  	printf("%d",uzunluk);
// }