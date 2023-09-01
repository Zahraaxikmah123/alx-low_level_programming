#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This function is the entry point of the program.
 * It prints the name of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
(void)argc; /* Unused variable (to satisfy the requirements) */

/* Print the name of the program */
printf("%s\n", argv[0]);
return (0);
}
