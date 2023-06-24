#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation,
 *			asked by the user.
 * @s: Operator passed as an argument to the program.
 *
 * Return: Pointer to the function that corresponds to the operator,
 *		given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int o = 0;

	while (ops[o].op != NULL)
	{
		if (*(ops[o].op) == *s)
			return (ops[o].f);
		o++;
	}
	return (NULL);
}
