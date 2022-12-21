#include <stdio.h>
/**
 * _putchar - prints the characters c to stdout
 * @c: char to be printed
 * Return: 1 0n success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
