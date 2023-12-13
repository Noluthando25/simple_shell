#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char *m = NULL, *m_cpy = NULL, *token = NULL;
	char *del = " \n";
	size_t n = 0;
	int argc = 0, a = 0;
	char **argv = NULL;

	printf("$ ");

	if (getline(&m, &n, stdin) == -1)
		return (-1);
	m_cpy = strdup(m);

	while (m[a])
	{
		if (m[a] == '\n')
			printf("\\n ---> Input has %ld characters", strlen(m));
		else
			printf("%c", m[a]);
		a++;
	}

	return (0);
}
