/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisikogl <eisikogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:14:09 by eisikogl          #+#    #+#             */
/*   Updated: 2022/08/03 06:11:54 by eisikogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "../libs/ft_printf/ft_printf.h"
# include "../libs/libft/libft.h"

typedef struct s_stack
{
    int *a;
    int *b;
    int arg_c;
    int size_b;
    int size_a;
    int size_a_ar;
    int *index_arr;
}   t_stack;

void    change_stack_a(t_stack *stack);
void    change_stack_b(t_stack *stack);

void f_sa(t_stack *stack);
void f_sb(t_stack *stack);
void f_ss(t_stack *stack);
void f_pa(t_stack *stack);
void f_pb(t_stack *stack);
void f_ra(t_stack *stack);
void f_rb(t_stack *stack);
void f_rr(t_stack *stack);
void f_rra(t_stack *stack);
void f_rrb(t_stack *stack);
void f_rrr(t_stack *stack);

int check_order(t_stack *stack);
int	cntrl(int nptr);
int	ft_atoi(const char *nptr);
int min_index(t_stack *stack,int sort);
int	ft_input_error(char **input);
int doubles_check(int argc, char **input);



void small_sort(t_stack *stack);
void five_sort(t_stack *stack);
void four_sort(t_stack *stack);
void three_sort(t_stack *stack);
void two_sort(t_stack *stack);
void indexing(t_stack *stack);
void big_sort(t_stack *stack);
void    free_me(t_stack *stack);

#endif
