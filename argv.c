#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - enrty point
 * @argc: first integer
 * @argv: second integer
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("argc: %d\n", argc);

	for (int a = 0; argv[a] != NULL; a++)
		printf("argv[%d]: %s\n", a, argv[a]);
	return (0);
}
