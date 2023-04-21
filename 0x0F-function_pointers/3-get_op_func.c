#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
  * get_op_func - function that selects the correct function
  * @s: the operator of the program
  * Return: 0
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int n = 0;

	while (n < 5)
	{
		if (strcmp(s, ops[n].op) == 0)
			return (ops[n].f);

		n++;
	}

	return (0);
}
