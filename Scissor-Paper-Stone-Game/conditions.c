#include "game.h"
/**
 * game_condition - determines the satisfied condition
 * @user: input from the user
 * @computer: the computer input
 * Return: an int type
 */
int game_condition(int user, int computer)
{
	if (user == 1 && computer == 2)
	{
		return (0);
	}
	else if(user == 2 && computer == 1)
	{
		return (1);
	}

	if (user == 1 && computer == 3)
	{
		return (1);
	}
	else if (user == 3 && computer == 1)
	{
		return (0);
	}

	if (user == 2 && computer == 3)
	{
		return (0);
	}
	else if (user == 3 && computer == 2)
	{
		return (1);
	}

	return (-1);
}
