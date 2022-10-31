#include <stdio.h>
#include "deck.h"


/**
 * print_deck - prints a deck of cards
 * @deck: the deck to print
 *
 * Return: void
 */
void print_deck(const deck_node_t *deck)
{
	char flag = 0, count = 0;
	char *kind = "SHCD";

	while (deck != NULL)
	{
		count++;
		if (flag)
			printf(", ");
		else
			flag = 1;
		printf("{%s, %c}", deck->card->value, kind[deck->card->kind]);
		deck = deck->next;
		if (count % 13 == 0)
		{
			flag = 0;
			printf("\n");
		}
	}
}
