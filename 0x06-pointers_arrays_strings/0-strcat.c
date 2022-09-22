#include <stdio.h>
#include "main.h"

/**
* _strcat - a function that cocantenates two strings
* @dest: the pointer to the cocantenated string
* @src: the string to be appended
* Return: returns a pointer to the string dest
*/
char *_strcat(char *dest, char *src)
{
	int n, c = 0, d = 0, j = 0;

	for (n = 0; dest[n] != 0; n++)
		c++;
	for (n = 0; src[n] != 0; n++)
		d++;
	for (n = c; src[j] != 0; n++)
	{
		dest[n] = src[j];
		j++;
	}
	return (dest);
}
