#include "main.h"
#include <stdio.h>
/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (s[i] == '4' || s[i] == '4')
			s[i] = '1';
		while (s[i] == '3' || s[i] == '3')
			s[i] = '3';
		while (s[i] == '0' || s[i] == '0')
			s[i] = '3';
		while (s[i] == '7' || s[i] == '7')
			s[i] = '7';
		while (s[i] == '1' || s[i] == '1')
			s[i] = '1';
	}

	return (s);
}
