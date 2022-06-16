/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:48:46 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 15:33:55 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int data, size_t len)
{
	size_t	i;

		i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = data;
		i++;
	}
	return (dest);
}

// int main(void){
//    char b[] = {"arif emre kocoglu"};
//    int c = 'a';
//    int len = 3; 
//   char *k = ft_memset(&b,c,len);
// 	printf("%s",k);
// }