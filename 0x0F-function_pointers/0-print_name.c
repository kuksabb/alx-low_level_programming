#include "function_pointers"
/**
 * print_name - entry point
 * @name: name
 * @f: pointer to function
 * Return: name
*/
void print_name(char *name, void (*f)(char *))
{

