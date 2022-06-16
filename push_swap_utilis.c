/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utilis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:12:58 by akocoglu          #+#    #+#             */
/*   Updated: 2022/06/15 19:10:34 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void    change_stack_a(t_stack *stack)
{
    int *temp_stack;
    int i;
    int j;
    int l;

    l = stack->size_a_ar;
    i = stack->size_a_ar - 1;
    j = stack->size_a_ar ;
    temp_stack = (int *)malloc(sizeof(int) * (stack->size_a_ar));
    while(l - 1>= 0)
    {
        temp_stack[i] = stack->a[i];
        i--;
        l--;
    }
    free(stack->a);
    stack->a = (int *)malloc(sizeof(int) * (stack->size_a_ar));
    while(j >= 0)
    {
        stack->a[j] = temp_stack[j];
        j--;
    }
    stack->size_a_ar--;
}

void    change_stack_b(t_stack *stack)
{
    int *temp_stack;
    int i;
    int j;
    int l;

    l = stack->size_b;
    i = stack->size_b - 2;
    j = stack->size_b - 2;
    temp_stack = (int *)malloc(sizeof(int) * (stack->size_b-1));
    while(l - 1>= 0)
    {
        temp_stack[i] = stack->b[i];
        i--;
        l--;
    }
    free(stack->b);
    stack->b = (int *)malloc(sizeof(int) * (stack->size_b - 1));
    while(j >= 0)
    {
        stack->b[j] = temp_stack[j];
        j--;
    }
    stack->size_b--;
}