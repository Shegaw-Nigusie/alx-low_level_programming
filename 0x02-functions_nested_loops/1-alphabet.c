/*
 * File: 1-alphabet.c
 * Auth: shegaw2
 */
#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 * Rerurn: always 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
		}
	_putchar('\n');
	return (0);
}

