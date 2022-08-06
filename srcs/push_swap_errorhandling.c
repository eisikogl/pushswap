/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_errorhandling.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisikogl <eisikogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 00:16:15 by eisikogl          #+#    #+#             */
/*   Updated: 2022/08/06 04:54:05 by eisikogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "../includes/push_swap.h"

void	doubles_check(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->arg_c)
	{
		j = i + 1;
		while (j <= stack->arg_c - 1)
		{
			if (stack->a[i] == stack->a[j])
				free_me(stack);
			j++;
		}
		i++;
	}
}

void	ft_error(char *err, int i)
{
	if (err != 0)
		ft_putstr_fd(err, 2);
	exit(i);
}

void	free_me(t_stack *stack)
{
	if (stack->a)
		free(stack->a);
	if (stack->b)
		free(stack->b);
	if (stack->index_arr)
		free(stack->index_arr);
	if (stack)
		free(stack);
	ft_error("Error\n",1);
}