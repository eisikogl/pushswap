/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocoglu <akocoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:14:09 by akocoglu          #+#    #+#             */
/*   Updated: 2022/06/15 19:10:34 by akocoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>

typedef struct s_stack
{
    int *a;
    int *b;
    int arg_c;
    int size_b;
    int size_a;
    int size_a_ar;
}   t_stack;

void    change_stack_a(t_stack *stack);
void    change_stack_b(t_stack *stack);

#endif
