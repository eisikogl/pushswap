/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eisikogl <eisikogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:41:30 by eisikogl          #+#    #+#             */
/*   Updated: 2022/08/06 03:42:03 by eisikogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	ft_argc(int argc,char **str)
{
	int		neg;
	long	num;
	int		i;
	int	len;
	int j;
	int arcount;

	arcount = 0;
	i = 1;
	j = 0;
	while(i < argc)
	{
		len = ft_strlen(str[i]);
		neg = 1;
		num = 0;
		while (str[i][j] == 32 || (str[i][j] >= 9 && str[i][j] <= 13))
		{
			j++;
		}
		if(j == len)
		{	
			i++;
			j = 0;
			continue;
		}
		if (str[i][j] == '-' || str[i][j] == '+')
		{
			if(!(ft_isdigit(str[i][j+1])))
				ft_error("Error\n",1);
			if (str[i][j] == '-')
			{
				neg *= -1;
			}
			j++;
		}
		if (!ft_isdigit(str[i][j]))
            ft_error("Error\n",1);
		while ((str[i][j] >= '0' && str[i][j] <= '9'))
		{
			num = num * 10 + (str[i][j] - 48);
			if (num > 0x7FFFFFFF && neg == 1)
				ft_error("Error\n",1);
			if (num > 0x80000000 && neg == -1)
				ft_error("Error\n",1);
			j++;
		}
		arcount++;
		if(j != len)
		{
			continue;
		}
		j = 0;
		i++;
	}
	return (arcount);
}

void	ft_argumentoi(int argc,char **str,t_stack *stack)
{
	int		neg;
	long	num;
	int		i;
	int	len;
	int j;
	int z;

	stack->a = (int *)malloc(sizeof(int) * stack->arg_c);
	stack->argumentoi = (int *)malloc(sizeof(int) * stack->arg_c);
	i = 1;
	z = 0;
	j = 0;
	while(i < argc)
	{
		len = ft_strlen(str[i]);
		neg = 1;
		num = 0;
		while (str[i][j] == 32 || (str[i][j] >= 9 && str[i][j] <= 13))
		{
			j++;
		}
		if(j == len)
		{	
			i++;
			j = 0;
			continue;
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
		stack->argumentoi[z] = (num * neg);
		z++;
		if(j != len)
		{
			continue;
		}
		j = 0;
		i++;
	}
	i = 0;
	j = stack->arg_c - 1;
	while(i < stack->arg_c)
	{
		stack->a[i] = stack->argumentoi[j];
		i++;
		j--;
	}
	free(stack->argumentoi);
	doubles_check(stack);
}


// int ft_checkarg(int argc,char **argv)
// {
// 	int j;
// 	int i;
// 	j = 0;

// 	i = 1;
// 	while(i < argc)
// 	{
// 		while(argv[i][j])
// 		{
// 			if(argv[i][j] == ' ')
// 				return (i);
// 		}
// 		i++;
// 	}
// 	return 0;
// }

// int ft_ignore(char **argv,int i,int j)
// {
// 	if((int)argv[i][j] == '\n' || (int)argv[i][j]  == '\t' || (int)argv[i][j]  == '\r')
// 		return 1;
// 	if((int)argv[i][j]  == '\v' || (int)argv[i][j]  == '\f' || (int)argv[i][j]  == ' ')
// 		return 1;
// 	return 0;
// }

// void ft_findargs(int argc,char **argv)
// {
//     int					i;
// 	int					j;
// 	int	count;
// 	int countarg;
// 	char **argument;
// 	int count2;

// 	argument = malloc(sizeof(char) * 11);
// 	countarg = 0;
// 	count = 0;
// 	i = 1;
// 	ft_printf("%d",ft_countarg(argc,argv));
// 	while (i < argc)
// 	{
// 		j = 1;
// 		if (argv[i][0] == '_')
// 		{	
// 			while(j <= ft_countarg(argc,argv))
// 			{	
				
// 				if (((int)argv[i][j] == '-' || (int)argv[i][j] == '+') && !(ft_isdigit((int)argv[i][j+1])))
// 					ft_error("Error\n",1);
// 				if((((int)argv[i][j] == '-' || (int)argv[i][j] == '+') && ft_isdigit((int)argv[i][j+1])) || ft_isdigit((int)argv[i][j]))
// 					argument[count][countarg++] = argv[i][j];
// 				if(j == ft_countarg(argc,argv) && ft_isdigit((int)argv[i][j]))
// 					argument[count++][countarg] = argv[i][j];
// 				if(ft_isdigit((int)argv[i][j]) && ft_ignore(argv,i,j+1) == 1)
// 				{
// 					argument[count++][countarg] = argv[i][j];
// 					countarg = 0;
// 				}
// 				j++;
// 			}
// 		}
// 		i++;
// 	}
// 	count2 = 0;
// 	countarg = 0;
// 	while(count2 < count)
// 	{
// 		while(argument[count2][countarg])
// 		{
// 			ft_printf("ARG: %d \n",argument[count2][countarg]);
// 			countarg++;
// 		}
// 		count2++;
// 	}
// 	free(argument);

// }