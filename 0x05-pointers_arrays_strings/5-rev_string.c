#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a string
 * Return: void
 */
void rev_string(char *s)
{
int length = 0;
char *begin, *end, temp;
while (*s)
{
s++;
length++;
}
s--;
begin = s - length + 1;
end = s;
while (begin < end)
{
temp = *begin;
*begin = *end;
*end = temp;
begin++;
end--;
}
}
