#include "push_swap.h"

void three_sort(t_stack *stack)
{
    int i = stack->size_a_ar;
    if (stack->a[i] < stack->a[0] && stack->a[i] < stack->a[i - 1] && stack->a[i - 1] > stack->a[0]) // 1 3 2
    {
        f_sa(stack);
        f_ra(stack);
        printf("\n sa \n ra"); 
    }
    if (stack->a[i] < stack->a[i - 1] && stack->a[i] > stack->a[0] && stack->a[i - 1] > stack->a[0]) // 2 3 1
    {
        f_rra(stack);
        printf("\n rra"); 
    }
    if (stack->a[i] > stack->a[i - 1] && stack->a[i] < stack->a[0] && stack->a[i - 1] < stack->a[0]) // 2 1 3
    {
        f_sa(stack);
        printf("\n sa"); 
    }
    if (stack->a[i] > stack->a[i - 1] && stack->a[i] > stack->a[0] && stack->a[i - 1] < stack->a[0]) // 3 1 2
    {
        f_ra(stack);
        printf("\n ra"); 
    }
    if (stack->a[i] > stack->a[i - 1] && stack->a[i] > stack->a[0] && stack->a[i - 1] > stack->a[0]) // 3 2 1
    {
        f_sa(stack);
        f_rra(stack); 
        printf("\n sa \n rra");       
    }
        
}
void four_sort(t_stack *stack)
{
    int i = stack->size_a_ar;
    // int j;
    int min;
    int min_index;

    // j = 0;
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
            printf("\n sa");
        }
        else if (min_index == stack->size_a_ar - 2)
        {
            f_rra(stack);
            f_rra(stack);
            printf("\n rra \n rra");
        }
        else if (min_index == stack->size_a_ar - 3)
        {
            f_rra(stack);
            printf("\n rra");
        }
        f_pb(stack);
        printf("\n pb");
        three_sort(stack);
        f_pa(stack);
        printf("\n pa");
        
}

void five_sort(t_stack *stack)
{
    int i = stack->size_a_ar;
    // int x = stack->size_a_ar;
    // int j;
    int min;
    // int max;
    int min_index;
    // int max_index;

    min = stack->a[i];
    // max = stack->a[i];
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
            printf("\n sa");
        }
        else if (min_index == stack->size_a_ar - 2)
        {
            f_rra(stack);
            f_rra(stack);
            f_rra(stack);
            printf("\n rra \n rra \n rra");
        }
        else if (min_index == stack->size_a_ar - 3)
        {
            f_rra(stack);
            f_rra(stack); 
            printf("\n rra \n rra"); 
        }
        else if (min_index == stack->size_a_ar - 4)
        {
            f_rra(stack); 
            printf("\n rra");
        }
        f_pb(stack);
        printf("\n pb");
        four_sort(stack);
        f_pa(stack);
        printf("\n pa");
}

void small_sort(t_stack *stack)
{
    
    if ((stack->size_a_ar + 1) == 3)
        three_sort(stack);
    if((stack->size_a_ar + 1) == 4)
        four_sort(stack);
    if((stack->size_a_ar + 1) == 5)
        five_sort(stack);
}

void indexing(t_stack *stack)
{
	int i;
	int j;
	int order_count;

	stack->index_arr = malloc(sizeof(int)*(stack->size_a_ar + 1));
	i = 0;
	while(i <= stack->size_a_ar)
	{
		j = 0;
		order_count = 0;
		while(j <= stack->size_a_ar)
		{
			if(j == i)
			{
				j++;
				continue;
			}
				
			if(stack->a[i] > stack->a[j])
				order_count++;
			
			j++;
		}
		stack->index_arr[i] = order_count;
		printf("imIndex: %d ",stack->index_arr[i]);
		i++;
	}
}