/*
 * File: 4-print_rev.c
 * Auth: Shegaw Nigusie
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
#include <stdio.h>
#include <string.h>

int main()
{
    char str[2][100];
    printf("Type Text: ");

    scanf("%[^\n]%*c", str[0]);
    int length = strlen(str[0]);
    int i, j;
    for (i = 0, j = length - 1; i < length; i++, j--)
    {
        str[1][i] = str[0][j];
    }
    printf("Original Word: %s\n", str[0]);
    printf("Reverse word: %s\n", str[1]);
    return 0;
}
