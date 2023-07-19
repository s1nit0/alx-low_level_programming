#include "main.h"

/**
 * main - print _putchar
 *
 * is written by mbah
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);

}
