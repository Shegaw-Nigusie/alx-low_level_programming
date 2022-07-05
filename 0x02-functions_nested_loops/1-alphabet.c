/*
 * File: 1-alphabet.c
 * Auth: shegaw2
 */

#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

