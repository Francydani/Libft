# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> 

typedef struct s_stack
{
	int				*content;
	int				t_index;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

void	*t_index(t_stack *stack_a)
{
	t_stack	*nodo_actual;
	t_stack	*nodo;
	int		i;

	nodo_actual = stack_a;
	while (nodo_actual != NULL)
	{
		i = 0;
		nodo = stack_a;
		while(nodo != NULL)
		{
			if (*(nodo_actual->content) > *(nodo->content))
				i++;
			nodo = nodo->next;
		}
		nodo_actual->t_index = i;
		nodo_actual = nodo_actual -> next;
	}
}

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 1)
		return (0);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (i - 1);
}

void	chuncks(t_stack **stack_a, t_bench *bench)
{
	t_stack	**stack_b;
	t_stack *nodo;
	t_stack	*nodo_actual;
	int	i;
	int	j;

	stack_b = malloc(sizeof(t_list *));
	nodo = *stack_a;
	i = 0;
	while(nodo->next != NULL)
	{
		i++;
		nodo = nodo->next;
	}
	j = ft_sqrt(i);
	nodo_actual = *stack_a;

	while (nodo_actual)
	{
		if (nodo_actual->t_index <= j)
		{
			pb(stack_a, stack_b, bench);
			if (nodo_actual->t_index <= (j / 2))
				rb(stack_b, bench);
		}
		ra(stack_a, bench);
	}
}

int	main(void)
{
	int val1 = 100, val2 = -2, val3 = 30, val4 = 4;
	
	t_stack n1, n2, n3, n4;

	// Stack A
	n1.content = &val1; n1.next = &n2; n1.prev = NULL;
	n2.content = &val2; n2.next = &n3; n2.prev = &n1;
	n3.content = &val3; n3.next = &n4; n3.prev = &n2;
	n4.content = &val4; n4.next = NULL; n4.prev =&n3;
	
	t_stack *stack_a = &n1;
	t_stack *aux;

	printf("Stack A: ");
	aux = stack_a;
	while (aux != NULL)
	{
		printf("[%d] -> ", *(aux->content));
		aux = aux->next;
	}
	printf("\nDespues\n");
	aux = stack_a;
	t_index(aux);
	while (aux != NULL)
	{
		printf("Valor: %d (Index: %d) -> \n", *(aux->content), aux->t_index);
		aux = aux->next;
	}
	return (0);
}