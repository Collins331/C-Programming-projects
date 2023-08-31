#include "game.h"
/**
 * main - the entry point the game
 * Return: 0 (success) else error
 */
int main(void)
{
	int user, rand_value, computer, result;

	welcome();

	printf("Please enter your choice\n\n");

	scanf("%d", &user);

	srand(time(NULL));

	rand_value = rand();

	computer = rand_value % 3 ;

	result = game_condition(user, computer);

	if (result == 1)
	{
		printf("Congratulations, You won\n");
		printf("\n\tYour input was %d and the computer input was %d\n\n", user, computer);
	}
	else if (result == 0)
	{
		printf("You lost\n");
		printf("\n\tYour input was %d and the computer input was %d\n\n", user, computer);
	}
	else
	{
		printf("You drew\n");
		printf("\n\tYour input was %d and the computer input was %d\n\n", user, computer);
	}

	return (0);
}
