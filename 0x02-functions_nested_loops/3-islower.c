#include "main.h"
/*
 * _islower - tests lowercase letter
 * character to test.
 * Return: 1 if it is a lowercase, 0 if not lowercase.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
