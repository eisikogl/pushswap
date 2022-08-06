/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_errorhandling.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisikogl <eisikogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 00:16:15 by eisikogl          #+#    #+#             */
/*   Updated: 2022/08/06 03:42:07 by eisikogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/push_swap.h"


// int	ft_input_error(char **input)
// {
// 	int					i;
// 	int					j;

// 	i = 1;
// 	while (input[i] != NULL)
// 	{
// 		j = 0;
// 		while (input[i][j] != '\0')
// 		{
//         while((int)input[i][j] == '\n' || (int)input[i][j]  == '\t' || (int)input[i][j]  == '\r' || (int)input[i][j] == '-')
//             j++;
//         while((int)input[i][j]  == '\v' || (int)input[i][j]  == '\f' || (int)input[i][j]  == ' ' || (int)input[i][j] == '+')
//             j++;
//         if (input[i][j] == '-')
//             j++;
//         if (!ft_isdigit(input[i][j]))
//             return (1);
//         j++;
// 		}
//         if (ft_atoi(input[i]) == 2147483650)
//             return (-1);
// 		i++;
// 	}
//     i=0;
    
// 	return (0);
// }

void doubles_check(t_stack *stack)
{
    int i;
    int j;

    i = 0;
    while (i < stack->arg_c)
    {
        j = i + 1;
        while (j <= stack->arg_c - 1)
        {
            if(stack->a[i] == stack->a[j])
                free_me(stack);
            j++;
        }
        i++;
    }
}

void    ft_error(char *err,int i)
{
    if (err != 0)
		ft_putstr_fd(err, 2);
    exit(i);
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
    ft_error("Error\n",1);
}