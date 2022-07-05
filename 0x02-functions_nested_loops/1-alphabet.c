/*
 * File: 1-alphabet.c
 * Auth: shegaw2
 */
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 * Rerurn: always 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
}
	_putchar('\n');

	return (0);
}

