/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:11:08 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 19:57:17 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	test2(char const *s, char c)
{
	size_t	m;

	m = 0;
	while (s[m] != '\0' && s[m] != c)
	{
		m++;
	}
	return (m);
}

static size_t	test1(char const *s, char c)
{
	size_t	m;

	m = 0;
	while (*s != '\0')
	{
		if (*s != c && (s[1] == '\0' || s[1] == c))
		{
			m++;
		}
		s++;
	}
	return (m);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	size;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
		size = test1(s, c);
		result = (char **)malloc(sizeof(char *) * size + 1);
	if (result == NULL)
		return (NULL);
	while (i < size)
	{
		while (*s == c && *s != '\0')
			s++;
			result[i] = (char *)malloc(sizeof(char) * test2(s, c) + 1);
			j = 0;
		while (*s != c && *s != '\0')
				result[i][j++] = *s++;
			result[i][j] = '\0';
			i++;
	}
		result[i] = NULL;
	return (result);
}

//  int main(void)
//  {
//      int i;
//      char s[]= "  tripouille  42  ";
//      printf("%s\n",s);
//      char c = ' ';
//      char **k = ft_split(s, c);
//      for( i = 0; i<8; i++)
//      {
//          printf("%s\n",k[i]);
//      }
//      return (0);
//  }