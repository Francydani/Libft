
#ifndef 
# define 

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int			*content;
	struct s_stack	*next;
}					t_stack;