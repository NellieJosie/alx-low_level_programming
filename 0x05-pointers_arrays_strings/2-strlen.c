#include "main.h"

/**
 *return_int -  returns the length of a string
 @s: string to get lenght
 *Return: length
 */
int _strlen(char *s)
{

	int longi = 0;
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
