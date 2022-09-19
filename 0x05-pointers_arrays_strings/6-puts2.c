#include <stdio.h>
#include "main.h"

/**
* puts2 - a function that prints every other character of
* a string, followed by a new line, to stdout
* @str: the string of characters to be printed
* Return: returns nothing
*/
void puts2(char *str)
{
	int j;

	for (j = 0; 1 ; j++)
	{
		if (*(str + j) == 0)
		{
			printf("\n");
			break;
		}
		if (j % 2 == 0)
			printf("%c", *(str + j));
	}
}
