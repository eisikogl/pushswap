/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisikogl <eisikogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:17:09 by eisikogl          #+#    #+#             */
/*   Updated: 2022/08/04 03:56:40 by eisikogl         ###   ########.fr       */
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

    if (argc <= 2)
        exit(1);
     if(ft_input_error(argv) == -1)
        ft_error("Error\n",1);
    if(ft_input_error(argv))
        ft_error("Error\n",1);
    if(doubles_check(argc,argv))
        ft_error("Error\n",1);
    stack = malloc(sizeof(t_stack));
    while(argc_count < argc - 2)
        argc_count++;
    stack->arg_c = argc_count;
    stack->a = (int *)malloc(sizeof(int) * argc_count);
    stack->b = (int *)malloc(sizeof(int) * argc_count);
    while(i <= argc - 1)
    {
        stack->a[argc_count] = ft_atoi(argv[i]);
        argc_count--;
        i++;
    }
    stack->size_b = 0;
    stack->size_a_ar = stack->arg_c;
    if(!check_order(stack))
        small_sort(stack);
    indexing(stack);
    big_sort(stack);
    i = stack->size_a_ar;
    // while(i)
    // {
    //     ft_printf("A: %d\n",stack->a[i]);
    //     i--;
    // }
    free(stack->a);
    free(stack->b);
    free(stack);
} 