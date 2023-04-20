#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * @argc: the number of args
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int bytes;

	if (argc != 2)
		printf("Error\n"), exit(1);

	bytes = atoi(argv[1]);
	if (bytes < 0)
		printf("Error\n"), exit(2);

	while (bytes--)
		printf("%02hhx%s", *p++, bytes ? " " : "\n");
	return (0);
}
