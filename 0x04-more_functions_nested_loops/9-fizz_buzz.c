#include <stdio.h>
#include "main.h"

/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*
*
*Return: returns 0
*/

int main(void)
{
	int b = 1;

	while (b++ < 100)
	{
		if ((b % 3 == 0) && (b % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((b % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((b % 5) == 0)
		{
			if (b != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", b);
		}
	}
	printf("\n");

	return (0);
}
