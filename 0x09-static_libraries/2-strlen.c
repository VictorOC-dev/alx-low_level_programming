#include "main.h"

/**
 *  _strlen - function that returns the length of a string
 * @s: function parameter
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int o;
	int count = 0;

	for (o = 0; s[o] != '\0' ; o++)
		count++;
	return (count);
}
