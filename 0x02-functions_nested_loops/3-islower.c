#include "main.h"
/**
 * _islower - check if a char is lowercas
 * @c: The character in ASCII code
 * Return: 1 if char is lowercase, otherwise 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
