#include <unistd.h>

/**
 * _putchar - function to write a char
 * @c: character input
 * Return: output c
**/

int _putchar(char c)

{

	return (write(1, &c, 1));

}
