#include <stdio.h>
#include "main.h"

/**
* print_rev - prints a given string of characters in reverse
* @s: string parameter to be reversed
* Return: Returns nothing
*/
void print_rev(char *s)
{
	int m, j;
	int c = 0;

	for (m = 0; 1 ; m++)
	{
		if (s[m] == 0)
			break;
		c++;
	}
	for (j = c - 1; j >= 0; j--)
	{
		printf("%c", s[j]);
	}
	printf("\n");
}
