#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the number of arguments passed into it.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
(void)argv; /* Unused variable (to satisfy the requirements) */

printf("%d\n", argc - 1);
return (0);
}
