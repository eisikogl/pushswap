/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utilis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisikogl <eisikogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:12:58 by eisikogl          #+#    #+#             */
/*   Updated: 2022/07/31 23:46:17 by eisikogl         ###   ########.fr       */
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

int check_order(t_stack *stack)
{
    int i;
    int j;

    i = 0;
    j = 0;


    while(i <= stack->size_a_ar)
    {
        j = i + 1;
        while(j <= stack->size_a_ar)
        {
            if(stack->a[i] < stack->a[j])
                return 0;
            j++;
        }
        i++; 
    }
    return 1;
}

int	cntrl(int nptr)
{
	int	a;
	int	b;

	a = (nptr == '\n' || nptr == '\t' || nptr == '\r');
	b = (nptr == '\v' || nptr == '\f' || nptr == ' ');
	return (a || b);
}

int	ft_atoi(const char *nptr)
{
	long	result;
	int		a;

	while (cntrl(*nptr))
		nptr++;
	a = *nptr == '-';
	nptr += (a || *nptr == '+');
	result = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = (result * 10) + *nptr++ - '0';
		if (result > 0x7FFFFFFF && a == 0)
			return (-1);
		if (result > 0x80000000 && a == 1)
			return (0);
	}
	return (result * ((a * -2) + 1));
}