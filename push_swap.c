/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:17:09 by akocoglu          #+#    #+#             */
/*   Updated: 2022/06/15 19:14:13 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    f_sa(t_stack *stack)
{
    int temp;

    if (stack->size_a_ar <= 1)
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
    int temp;

   f_sa(stack);
   f_sb(stack);
}

void    f_pb(t_stack *stack)
{
    stack->b[stack->size_b]= stack->a[stack->size_a_ar];
    stack->size_b++;
    change_stack_a(stack);
}

void    f_pa(t_stack *stack)
{
    int *temp;
    int i = stack->size_a_ar;
    int j = stack->size_a_ar;

    temp = (int *)malloc(sizeof(int) * (stack->size_a_ar + 2));
    while(i >= 0)
    {
        temp[i] = stack->a[i];
        i--; 
    }
    free(stack->a);
    stack->a = (int *)malloc(sizeof(int) * (stack->size_a_ar + 2));
    stack->a[stack->size_a_ar + 1] = stack->b[stack->size_b - 1];
    while(j >= 0)
    {
        stack->a[j] = temp[j] ;
        j--;
    }
    stack->size_a_ar++;
    change_stack_b(stack);
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

// void find_order(t_stack *stack)
// {
//     while(stack->a)
//     {
//         stack->a[i] 
//     }
// }

void sort(t_stack *stack)
{
    int i;
    int j;
    int x;
    int y;
    int count_a;

    i = stack->size_a_ar;
    j = stack->size_b - 1;
    if(stack->a[i] > stack->a[i - 1] && stack->b[j] > stack->b[j - 1])
        f_ss(stack);
    else if(stack->a[i] > stack->a[i - 1])
        f_sa(stack);
    else if(stack->b[j] > stack->b[j - 1])
        f_sb(stack);
    
    x = stack->size_a_ar - 1;
    y = stack->size_a_ar;
    count_a = 0;
    while (x >= 0)
    {
           if(stack->a[stack->size_a_ar] < stack->a[x])
            {
                count_a++;
            }
            x--;
    }
    if(count_a == )
}

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
        printf("dizi:%d \n", stack->a[argc_count]);
        argc_count--;
        i++;
    }
    stack->size_b = 0;
    stack->size_a_ar = stack->arg_c;
    sort(stack);
    printf("****************************** \n");
    // f_sa(stack);
    // f_pb(stack);
    // f_pb(stack);
    // f_pb(stack);
    // f_ra(stack);
    // f_rb(stack);
    // f_rra(stack);
    // f_rrb(stack);
    // f_sa(stack);
    // f_pa(stack);
    // f_pa(stack);
    // f_pa(stack);

    int x = stack->size_a_ar;
    int b = stack->size_b - 1;
    while(x >= 0)
    {
        printf("A-%d \n", stack->a[x]);
        x--;
    }
    while(b >= 0)
    {
        printf("B-%d \n", stack->b[b]);
         b--;
    }
    
} 