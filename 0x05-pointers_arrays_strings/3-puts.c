#include "main.h"
/**
* _puts - prints string
* @str: input string
* Return: no return
*/

void _puts(char *str)
{
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
