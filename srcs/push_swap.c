/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisikogl <eisikogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:17:09 by eisikogl          #+#    #+#             */
/*   Updated: 2022/08/02 10:57:07 by eisikogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/push_swap.h"

int main(int argc, char *argv[])
{
    int argc_count;
    int i;
    t_stack *stack;

    argc_count = 0;
    i          = 1;
    
    stack = malloc(sizeof(t_stack));
    if (argc <= 1)
        return (0);
    while(argc_count < argc - 2)
        argc_count++;
    stack->arg_c = argc_count;
    stack->a = (int *)malloc(sizeof(int) * argc_count);
    stack->b = (int *)malloc(sizeof(int) * argc_count);
    while(i <= argc - 1)
    {
        stack->a[argc_count] = ft_atoi(argv[i]);
        ft_printf("dizi:%d \n", stack->a[argc_count]);
        argc_count--;
        i++;
    }
    stack->size_b = 0;
    stack->size_a_ar = stack->arg_c;

    ft_printf("****************************** \n");

    if(!check_order(stack))
        small_sort(stack);
    big_sort(stack);
    ft_printf("\n\n");
    int x = stack->size_a_ar;
    int b = stack->size_b - 1;
  
    while(x >= 0)
    {
        ft_printf("A-%d \n", stack->a[x]);
        x--;
    }
    while(b >= 0)
    {
        ft_printf("B-%d \n", stack->b[b]);
         b--;
    }
} 