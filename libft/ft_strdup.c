/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:59:17 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 17:30:47 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	total;
	char	*p;

	total = ft_strlen(s1) + 1;
	p = malloc(total);
	if (p != NULL)
	{
		ft_memcpy(p, s1, total);
		return (p);
	}
	return (0);
}

// int main(void)
// {
//     char s1[] = "GeeksForGeeks";
//     char *k = ft_strdup(s1);
//     printf("%s", k);
//     return (0);
// }