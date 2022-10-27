#include "main.h"
#include <string.h>


/**
 * *_strcat - concatenates two strings
 *
 * @dest: - first char to check
 * @src: - second char to check
 * Return: &dest
 */

char *_strcat(char *dest, char *src)
{
	char dest[] = "Geeks";
	char src[] = "forGeeks";

	strcat(dest, src);
	printf("Final string is: %s ", dest);
	return (0);
}
