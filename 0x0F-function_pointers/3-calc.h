#ifndef _3_CALC_H
#define _3_CALC_H
/**
 * struct op - desc
 * @op: qsq
 * @f: qsdqsdq
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
/**
 * op_add - ssss.
 * @a: sssss
 * @b: ssssss
 * Return: ss.
 */
int op_add(int a, int b);
/**
 * op_sub - ssss.
 * @a: sssss
 * @b: ssssss
 * Return: ss.
 */
int op_sub(int a, int b);
/**
 * op_mul - ssss.
 * @a: sssss
 * @b: ssssss
 * Return: ss.
 */
int op_mul(int a, int b);
/**
 * op_div - ssss.
 * @a: sssss
 * @b: ssssss
 * Return: ss.
 */
int op_div(int a, int b);
/**
 * op_mod - ssss.
 * @a: sssss
 * @b: ssssss
 * Return: ss.
 */
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif

