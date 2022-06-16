/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:28:13 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 17:47:39 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *a, const char *b, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*b == '\0')
		return ((char *)a);
	while (a[i] != '\0')
	{
		j = 0;
		while (a[j + i] == b[j] && (j + i) < len)
		{
			if (a[j + i] == '\0' && b[j] == '\0' )
				return ((char *)&a[i]);
				j++;
		}
		if (b[j] == '\0')
			return ((char *)a + i);
			i++;
	}
	return (0);
}

// int main(void)
// {
//     char a[] = "Foo Bar Baz";
//     char b[] = "Bar";
//     int len = 7;
//     char *k = ft_strnstr(a, b, len);
//     printf("%s", k);
//     return (0);
// }