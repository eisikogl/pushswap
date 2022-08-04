/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisikogl <eisikogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:14:09 by eisikogl          #+#    #+#             */
/*   Updated: 2022/08/04 01:20:24 by eisikogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    f_sa(t_stack *stack)
{
    int temp;

    if (stack->size_a_ar < 1)
        return ;
    temp = stack->a[stack->size_a_ar];
    stack->a[stack->size_a_ar] = stack->a[stack->size_a_ar - 1];
    stack->a[stack->size_a_ar - 1] = temp;
}

void    f_sb(t_stack *stack)
{
    int temp;
    if (stack->size_b <= 1)
        return ;
    temp = stack->b[stack->size_b - 1];
    stack->b[stack->size_b - 1] = stack->b[stack->size_b - 2];
    stack->b[stack->size_b - 2] = temp;
}

void    f_ss(t_stack *stack)
{
   f_sa(stack);
   f_sb(stack);
}

void    f_pb(t_stack *stack)
{
    stack->size_b++;
    stack->b[stack->size_b - 1] = stack->a[stack->size_a_ar];
    stack->size_a_ar--;
    //change_stack_a(stack);
}

// void    f_pa(t_stack *stack)
// {
//     int *temp;
//     int i = stack->size_a_ar;
//     int j = stack->size_a_ar;

//     temp = (int *)malloc(sizeof(int) * (stack->size_a_ar + 1));
//     while(i >= 0)
//     {
//         temp[i] = stack->a[i];
//         i--; 
//     }
//     free(stack->a);
//     stack->a = (int *)malloc(sizeof(int) * (stack->size_a_ar + 2));
//     stack->a[stack->size_a_ar + 1] = stack->b[stack->size_b - 1];
//     while(j >= 0)
//     {
//         stack->a[j] = temp[j];
//         j--;
//     }
//     free(temp);
//     stack->size_a_ar++;
//     change_stack_b(stack);
// }

void    f_pa(t_stack *stack)
{
    stack->a[stack->size_a_ar + 1] = stack->b[stack->size_b - 1];

    stack->size_a_ar++;
    stack->size_b--;
    //change_stack_b(stack);
}

void f_ra(t_stack *stack)
{
    int temp;
    int i = stack->size_a_ar;
    int j = 1;

    // temp = (int *)malloc(sizeof(int) * (stack->size_a_ar + 2));
    temp = stack->a[stack->size_a_ar];
    while(i > 0)
    {
        stack->a[i] = stack->a[stack->size_a_ar - j];
        i--;
        j++;
    }
    stack->a[0] = temp;
}

void f_rb(t_stack *stack)
{
    int temp;
    int i = stack->size_b - 1;
    int j = 1;

    temp = stack->b[stack->size_b - 1];
    while(i > 0)
    {
        stack->b[i] = stack->b[stack->size_b - 1 - j];
        i--;
        j++;
    }
    stack->b[0] = temp;
}

void f_rr(t_stack *stack)
{
    f_ra(stack);
    f_rb(stack);
}

void f_rra(t_stack *stack)
{
    int temp;
    int i = 0;
    int j = 0;

    temp = stack->a[0];
    while(i < stack->size_a_ar)
    {
        stack->a[0 + j] = stack->a[j + 1];
        i++;
        j++;
    }
    stack->a[stack->size_a_ar] = temp;
}

void f_rrb(t_stack *stack)
{
    int temp;
    int i = 0;
    int j = 0;

    temp = stack->b[0];
    while(i < stack->size_b - 1)
    {
        stack->b[0 + j] = stack->b[j + 1];
        i++;
        j++;
    }
    stack->b[stack->size_b - 1] = temp;
}

void f_rrr(t_stack *stack)
{
    f_rra(stack);
    f_rrb(stack);
}
