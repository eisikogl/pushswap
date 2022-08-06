/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisikogl <eisikogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:17:09 by eisikogl          #+#    #+#             */
/*   Updated: 2022/08/06 03:42:08 by eisikogl         ###   ########.fr       */
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

    if (argc < 1)
        exit(1);
    stack = malloc(sizeof(t_stack));
    stack->arg_c = ft_argc(argc,argv);
    ft_argumentoi(argc,argv,stack);
    stack->b = (int *)malloc(sizeof(int) * stack->arg_c);
    stack->size_b = 0;
    stack->size_a_ar = stack->arg_c - 1;
    if(!check_order(stack))
    {
        if((stack->size_a_ar + 1) <= 5)
            small_sort(stack);
        else
        {
            indexing(stack);
            big_sort(stack);
        }
    }
    i = stack->size_a_ar;
    // while(i > -1)
    // {
    //     ft_printf("A: %d\n",stack->a[i]);
    //     i--;
    // }
    free(stack->a);
    free(stack->b);
    free(stack);
    //system("leaks push_swap");
} 