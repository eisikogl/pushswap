/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisikogl <eisikogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 04:23:50 by eisikogl          #+#    #+#             */
/*   Updated: 2022/08/02 13:49:23 by eisikogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

void two_sort(t_stack *stack)
{
    if(stack->a[1] > stack->a[0])
    {
        f_sa(stack);
        ft_printf("sa\n");
    }
    
}

void three_sort(t_stack *stack)
{
    int i = stack->size_a_ar;
    if (stack->a[i] < stack->a[0] && stack->a[i] < stack->a[i - 1] && stack->a[i - 1] > stack->a[0]) // 1 3 2
    {
        f_sa(stack);
        f_ra(stack);
        ft_printf("sa\nra\n"); 
    }
    if (stack->a[i] < stack->a[i - 1] && stack->a[i] > stack->a[0] && stack->a[i - 1] > stack->a[0]) // 2 3 1
    {
        f_rra(stack);
        ft_printf("rra\n"); 
    }
    if (stack->a[i] > stack->a[i - 1] && stack->a[i] < stack->a[0] && stack->a[i - 1] < stack->a[0]) // 2 1 3
    {
        f_sa(stack);
        ft_printf("sa\n"); 
    }
    if (stack->a[i] > stack->a[i - 1] && stack->a[i] > stack->a[0] && stack->a[i - 1] < stack->a[0]) // 3 1 2
    {
        f_ra(stack);
        ft_printf("ra\n"); 
    }
    if (stack->a[i] > stack->a[i - 1] && stack->a[i] > stack->a[0] && stack->a[i - 1] > stack->a[0]) // 3 2 1
    {
        f_sa(stack);
        f_rra(stack); 
        ft_printf("sa\nrra\n");       
    }        
}
void four_sort(t_stack *stack)
{
    int i = stack->size_a_ar;
    int min;
    int min_index;

    min = stack->a[i];
        while (i >= 0)
        {
            if (min >= stack->a[i])
            {
                min = stack->a[i];
                min_index = i;
            }
            i--;
        }
        if (min_index == stack->size_a_ar - 1)
        {
            f_sa(stack);
            ft_printf("sa\n");
        }
        else if (min_index == stack->size_a_ar - 2)
        {
            f_rra(stack);
            f_rra(stack);
            ft_printf("rra\nrra\n");
        }
        else if (min_index == stack->size_a_ar - 3)
        {
            f_rra(stack);
            ft_printf("rra\n");
        }
        f_pb(stack);
        ft_printf("pb\n");
        three_sort(stack);
        f_pa(stack);
        ft_printf("pa\n");
}

void five_sort(t_stack *stack)
{
    int i = stack->size_a_ar;
    int min;
    int min_index;

    min = stack->a[i];
        while (i >= 0)
        {
            if (min >= stack->a[i])
            {
                min = stack->a[i];
                min_index = i;
            }
            i--;
        }
        if (min_index == stack->size_a_ar - 1)
        {
            f_sa(stack);
            ft_printf("sa\n");
        }
        else if (min_index == stack->size_a_ar - 2)
        {
            f_rra(stack);
            f_rra(stack);
            f_rra(stack);
            ft_printf("rra\nrra\nrra\n");
        }
        else if (min_index == stack->size_a_ar - 3)
        {
            f_rra(stack);
            f_rra(stack); 
            ft_printf("rra\nrra\n"); 
        }
        else if (min_index == stack->size_a_ar - 4)
        {
            f_rra(stack);
            ft_printf("rra\n");
        }
        f_pb(stack);
        ft_printf("pb\n");
        four_sort(stack);
        f_pa(stack);
        ft_printf("pa\n");
}

void small_sort(t_stack *stack)
{
    if ((stack->size_a_ar + 1) == 2)
        two_sort(stack);
    if ((stack->size_a_ar + 1) == 3)
        three_sort(stack);
    if((stack->size_a_ar + 1) == 4)
        four_sort(stack);
    if((stack->size_a_ar + 1) == 5)
        five_sort(stack);
}

void indexing(t_stack *stack)
{
	int i;
	int j;
	int order_count;

	stack->index_arr = malloc(sizeof(int)*(stack->size_a_ar + 1));
	i = 0;
	while(i <= stack->size_a_ar)
	{
		j = 0;
		order_count = 0;
		while(j <= stack->size_a_ar)
		{
			if(j == i)
			{
				j++;
				continue;
			}
				
			if(stack->a[i] > stack->a[j])
				order_count++;
			
			j++;
		}
		stack->index_arr[i] = order_count;
		//ft_printf("imIndex: %d ",stack->index_arr[i]);
		i++;
	}
    i=0;
    while(i <= stack->size_a_ar)
    {
        stack->a[i] = stack->index_arr[i];
        i++;
    }

}