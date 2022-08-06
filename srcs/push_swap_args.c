/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisikogl <eisikogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:41:30 by eisikogl          #+#    #+#             */
/*   Updated: 2022/08/06 06:06:07 by eisikogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	ft_argc(int argc, char **str)
{
	int		neg;
	long	num;
	int		i;
	int		len;
	int		j;
	int		arcount;

	arcount = 0;
	i = 1;
	j = 0;
	while (i < argc)
	{
		len = ft_strlen(str[i]);
		neg = 1;
		num = 0;
		while (str[i][j] == 32 || (str[i][j] >= 9 && str[i][j] <= 13))
		{
			j++;
		}
		if (j == len)
		{	
			i++;
			j = 0;
			continue ;
		}
		if (str[i][j] == '-' || str[i][j] == '+')
		{
			if (!(ft_isdigit(str[i][j+1])))
				ft_error("Error\n", 1);
			if (str[i][j] == '-')
			{
				neg *= -1;
			}
			j++;
		}
		if (!ft_isdigit(str[i][j]))
			ft_error("Error\n", 1);
		while ((str[i][j] >= '0' && str[i][j] <= '9'))
		{
			num = num * 10 + (str[i][j] - 48);
			if (num > 0x7FFFFFFF && neg == 1)
				ft_error("Error\n", 1);
			if (num > 0x80000000 && neg == -1)
				ft_error("Error\n", 1);
			j++;
		}
		arcount++;
		if (j != len)
		{
			continue ;
		}
		j = 0;
		i++;
	}
	return (arcount);
}

void	ft_argumentoi(int argc, char **str, t_stack *stack)
{
	int		neg;
	long	num;
	int		i;
	int		len;
	int		j;
	int		z;
	int		*argumentoi;

	stack->a = (int *)malloc(sizeof(int) * stack->arg_c);
	argumentoi = (int *)malloc(sizeof(int) * stack->arg_c);
	i = 1;
	z = 0;
	j = 0;
	while (i < argc)
	{
		len = ft_strlen(str[i]);
		neg = 1;
		num = 0;
		while (str[i][j] == 32 || (str[i][j] >= 9 && str[i][j] <= 13))
		{
			j++;
		}
		if (j == len)
		{	
			i++;
			j = 0;
			continue ;
		}
		if (str[i][j] == '-' || str[i][j] == '+')
		{
			if (str[i][j] == '-')
			{
				neg *= -1;
			}
			j++;
		}
		while ((str[i][j] >= '0' && str[i][j] <= '9'))
		{
			num = num * 10 + (str[i][j] - 48);
			j++;
		}
		argumentoi[z] = (num * neg);
		z++;
		if (j != len)
		{
			continue ;
		}
		j = 0;
		i++;
	}
	i = 0;
	j = stack->arg_c - 1;
	while (i < stack->arg_c)
	{
		stack->a[i] = argumentoi[j];
		i++;
		j--;
	}
	free(argumentoi);
	doubles_check(stack);
}
