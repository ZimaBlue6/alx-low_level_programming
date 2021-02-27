#include <stdio.h>
/**
 *main - prints its the number of arguments passed into it
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0
 */

int main(int argc, char *argv[])
{

	int n = argc - 1;

	(void)argv;
	printf("%d\n", n);

	return (0);
}
