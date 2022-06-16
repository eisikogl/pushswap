/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:26:36 by akocoglu          #+#    #+#             */
/*   Updated: 2022/02/10 18:12:30 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	yerlestir(int num)
{
	int		numlen;

	numlen = 0;
	if (num == 0)
	{
		numlen = 1;
	}
	if (num < 0)
	{
		numlen++;
		num = -1 * num;
	}
	while (num != 0)
	{
		num = num / 10;
		numlen++;
	}
	return (numlen);
}

char	*ft_itoa(int n)
{
	int		nlen;
	char	*s;
	long	num;

	nlen = 0;
	num = (long)n;
	nlen = yerlestir(n);
	s = malloc(nlen + 1);
	if (s == NULL)
		return (NULL);
	s[nlen] = '\0';
	if (num == 0)
		s[0] = '0';
	if (num < 0)
	{
		s[0] = '-';
		num = -num;
	}
	nlen--;
	while (nlen >= 0 && num != 0)
	{
		s[nlen--] = num % 10 + '0';
		num = num / 10;
	}
	return (s);
}

//  int main(void)
//  {
//      int n = -1013;
//      char *a = ft_itoa(n);
//      printf("%s", a);
//      return (0);
//  }