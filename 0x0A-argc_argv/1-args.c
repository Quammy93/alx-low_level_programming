#include "main.h"
#include<stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 *
 * @argc: int to checked
 * @argv: char to checked
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	printf("argc = %d\n", argc);
	for(i = 0; i < argc; i++)
	{
		printf("argv[%d] = char* %s\n", i argv[i]);
	}
	return (0);
}

