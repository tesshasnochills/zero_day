#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point of program.
* Program to evaluate face values.
* Released under the Vegas Public Licence.
* (c) 2014 The College Blackjack Team.
* Return: Always 0(Success)
*/
int main(void)
{
	char card_name[3];

	puts("Enter the card_name: ");
	scanf("%2s", card_name);
	int val = 0;

	if (card_name[0] == 'K')
	{
		val = 10;
	}
	else if (card_name[0] == 'Q')
	{
		val = 10;
	}
	else if (card_name[0] == 'J')
	{
		val = 10;
	}
	else if (card_name[0] == 'A')
	{
		val = 11;
	}
	else
	{
	val = atoi(card_name);
	}
	printf("The card value is; %i\n", val);
	return (0);
}
