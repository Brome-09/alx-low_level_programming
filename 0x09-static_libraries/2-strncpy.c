#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *input, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		input[j] = src[j];
		j++;
	}
	while (j < n)
	{
		input[j] = '\0';
		j++;
	}

	return (input);
}

