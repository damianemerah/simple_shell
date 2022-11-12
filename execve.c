#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Execute the program in argv[1]
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *av[] = {NULL, "-l", NULL};

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", av[0]);
		return (-1);
	}

	av[0] = argv[1];

	execve(av[0], av, NULL);
	perror("Error");

	return (0);
}
