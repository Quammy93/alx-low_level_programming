#include "main.h"

/**
   * _strncat - concatenates n bytes of two strings
    * @dest: pointer destination
     * @src: pointer source
      * @n: number of bytes
       * Return: void
        */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int i;
	m = 0;

					for (i = 0; i < 1000; i++)
							{
										if (dest[i] == '\0')
													{
																	break;
																			}
												m++;
													}
						for (i = 0; src[i] != '\0' && i < n; i++)
								{
											dest[m + i] = src[i];
												}
							dest[m + i] = '\0';
								return (dest);
}
