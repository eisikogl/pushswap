/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 02:08:44 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 17:58:15 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i--)
		if (s[i] == (char)c)
			return ((char *)(s + i));
	return (NULL);
}

//  int main(void)
//  {
//      char s[] = "http://www.tutorialspoint.com";
//      int c = '.';
//      char *a = ft_strrchr(s,c);
//      printf("%s",a);
//      return (0);
//  }