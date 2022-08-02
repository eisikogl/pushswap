/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bigsort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisikogl <eisikogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 03:20:05 by eisikogl          #+#    #+#             */
/*   Updated: 2022/08/02 13:39:40 by eisikogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void big_sort(t_stack *stack)
{
   int size;
   int max_num;
   int max_bits;
   int i;
   int j;

	i = 0;
   size = stack->size_a_ar + 1;
   max_num = size - 1;
   max_bits = 0;

   while((max_num >> max_bits) != 0)
   {
        ++max_bits;
   }

    while(i < max_bits)
    {
		j = 0;
        while(j < size)
        {
            int num = stack->a[stack->size_a_ar]; // indexing has to be affected by swapfunc somehow
            if((((num >> i)&1) == 1))
			{
                f_ra(stack);
				ft_printf("ra\n");
			}
            else
			{
                f_pb(stack);
				ft_printf("pb\n");
			}
			j++;
        }
        while (stack->size_b != 0)
        {
            f_pa(stack);
			ft_printf("pa\n");
        }
		i++;
    }
}