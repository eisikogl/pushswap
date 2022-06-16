/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:55:17 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 17:35:01 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (dstsize)
	{
		while (*src && dstsize-- - 1)
			*dst++ = *src++;
		*dst = 0;
	}
	return (i);
}

// int main(void)
// { 
//     char dst[]="arsdfsdfds";
//     char src[] = "emreeee";
//     int a = ft_strlcpy(dst,src,6);
//     printf("%d", a);
//     printf("%s",dst);
//     return (0);
// }