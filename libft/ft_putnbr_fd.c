/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:41:13 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 21:09:30 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	k[10];
	int		i;
	long	new;

	new = n;
	i = 0;
	if (new == 0)
	{
		write(fd, "0", 1);
	}
	if (new < 0)
	{
		new *= -1;
		write(fd, "-", 1);
	}
	while (new)
	{
		k[i++] = new % 10 + '0';
		new /= 10;
	}
	while (i--)
	{
		write(fd, k + i, 1);
	}
}

// int main(void)
// {
//     ft_putnbr_fd(0,1);
//     return(0);
// }