#include "header.h"
/**
 * main - main function.
 * Return: 0.
 */
int main(void)
{
	welcome();
	if (!isatty(STDIN_FILENO))
		fflush(stdout);
	signal(SIGINT, CtrlC);
	while (1)
		words();
	return (0);
}
