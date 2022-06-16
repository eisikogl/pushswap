/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:50:44 by akocoglu          #+#    #+#             */
/*   Updated: 2022/01/31 14:58:53 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*dst;

	total = count * size;
	dst = malloc(total);
	if (!dst)
	{
		return (0);
	}
	ft_memset(dst, 0, total);
	return (dst);
}

// ayrılacak blok sayısı ve her bloğun bayt cinsinden boyutu verilecek.
// mallocdan farkı hepsini 0' eşitler o işlemi bu fonksyon ile yaptık.