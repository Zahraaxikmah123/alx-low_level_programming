#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: This program calculates the minimum number of coins
 * needed to make change for an amount of money in cents.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
int cents;
int numCoins = 0;
int i;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
i = 0;
while (cents > 0)
{
if (cents >= coins[i])
{
cents -= coins[i];
numCoins++;
}
else
{
i++;
}
}
printf("%d\n", numCoins);
return (0);
}
