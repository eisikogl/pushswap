/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_errorhandling.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisikogl <eisikogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 00:16:15 by eisikogl          #+#    #+#             */
/*   Updated: 2022/08/03 06:58:57 by eisikogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/push_swap.h"

int	ft_input_error(char **input)
{
	int					i;
	int					j;

	i = 1;
	while (input[i] != NULL)
	{
		j = 0;
		while (input[i][j] != '\0')
		{
			if (input[i][j] == '-')
				j++;
			if (!ft_isdigit(input[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int doubles_check(int argc, char **input)
{
    int i;
    int j;

    i = 1;
    while (i < argc - 1)
    {
        j = i + 1;
        while (j <= argc - 1)
        {
            if(ft_atoi(input[i]) == ft_atoi(input[j]))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

void    free_me(t_stack *stack)
{
    if (stack->a)
        free(stack->a);
    if (stack->b)
        free(stack->b);
     if (stack->index_arr)
        free(stack->index_arr);
    if (stack)
        free(stack);
}