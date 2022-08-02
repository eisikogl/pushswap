/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bigsort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisikogl <eisikogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 03:20:05 by eisikogl          #+#    #+#             */
/*   Updated: 2022/08/02 06:21:03 by eisikogl         ###   ########.fr       */
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
				ft_printf("\n ra");
			}
            else
			{
                f_pb(stack);
				ft_printf("\n pb");
			}
			j++;
        }
        while (stack->size_b != 0)
        {
            f_pa(stack);
			ft_printf("\n pa");
        }
		i++;
    }
}

// int size = a.size();
// int max_num = size - 1; // the biggest number in a is stack_size - 1
// int max_bits = 0; // how many bits for max_num 
// while ((max_num >> max_bits) != 0) ++max_bits;
// for (int i = 0 ; i < max_bits ; ++i) // repeat for max_bits times
// {
//     for(int j = 0 ; j < size ; ++j)
//     {
//         int num = a.top(); // top number of A
//         if ((num >> i)&1 == 1) ra(); 
//         // if the (i + 1)-th bit is 1, leave in stack a
//         else pb();
//         // otherwise push to stack b
//     }
//     // put into boxes done
//     while (!b.empty()) pa(); // while stack b is not empty, do pa
    
//     // connect numbers done
// }

