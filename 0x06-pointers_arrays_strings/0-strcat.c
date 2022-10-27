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
	char i;
	char j = strlen(src);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
		dest[i + j] = '\0';
	return;
	}
}

