#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: - first char to check
 * @src: - second char to check
 * Return: &dest
 */

char *_strcat(char *dest, char *src)
{
	char *dest;
	char *src;

	printf("Concatenated String: %s\n",  strcat(dest, src));
	return (&dest);
}

