#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	pid_t pid;
	char *argv[] = {"/bin/ls", "-l", NULL};

	pid = fork();

	if (pid == -1)
		return (1);
	if (pid == 0)
	{
		int num = execve(argv[0], argv, NULL);

	if (num == -1)
		perror("Error");
	}
	else
	{
		wait(NULL);
			printf("done\n");
	}
	return (0);
}
