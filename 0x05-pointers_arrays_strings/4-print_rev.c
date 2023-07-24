#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to a string
 * Return: void
 */
void print_rev(char *s)
{
int length = 0;
while (*s)
{
s++;
length++;
}
s--;
while (length > 0)
{
_putchar(*s);
s--;
length--;
}
_putchar('\n');
}
