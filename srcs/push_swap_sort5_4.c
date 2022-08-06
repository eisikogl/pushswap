/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort5_4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisikogl <eisikogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 06:01:46 by eisikogl          #+#    #+#             */
/*   Updated: 2022/08/06 06:24:40 by eisikogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "../includes/push_swap.h"

void	four_sort(t_stack *stack)
{
	int	i;
	int	min;
	int	min_index;

	i = stack->size_a_ar;
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

// void	four_sort2(t_stack *stack, int min_index)
// {
// }

void	five_sort(t_stack *stack)
{
	int	i;
	int	min;
	int	min_index;

	i = stack->size_a_ar;
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

// void	five_sort2(t_stack *stack, int min_index)
// {
// }
