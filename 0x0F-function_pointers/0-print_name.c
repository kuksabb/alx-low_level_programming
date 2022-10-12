#include "function_pointers"
/**
 * print_name - entry point
 * @name: name
 * @f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
