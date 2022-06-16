/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:28:20 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 14:45:09 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cntrl(int nptr)
{
	int	a;
	int	b;

	a = (nptr == '\n' || nptr == '\t' || nptr == '\r');
	b = (nptr == '\v' || nptr == '\f' || nptr == ' ');
	return (a || b);
}

int	ft_atoi(const char *nptr)
{
	long	result;
	int		a;

	while (cntrl(*nptr))
		nptr++;
	a = *nptr == '-';
	nptr += (a || *nptr == '+');
	result = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = (result * 10) + *nptr++ - '0';
		if (result > 0x7FFFFFFF && a == 0)
			return (-1);
		if (result > 0x80000000 && a == 1)
			return (0);
	}
	return (result * ((a * -2) + 1));
}

// 	 int main(void)
// {     
// 		char str[] = "   -2345";
//      int a = ft_atoi(str);
//      printf("%d", a);
//      return (0);
//  }
