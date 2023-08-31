#include "game.h"
/**
 * welcome - dispalys the prompt to welcome the user into the game
 *Description: it receives no input
 *Return: Nothing
 */
void welcome(void)
{
	printf("\n\t\t\t\t\tWelcome to Scissor, Stone and Paper game\n");
	sleep(2);
	printf("\n\t\t\t\t\tRules for playing are: \n");
	printf("\n\t\t\t\t\t1. You have to select one of the options provided\n\n");
	printf("\t\tReply with either 1, or 2 or 3\n");
	printf("\t\t\t1. -> Stone\n");
	printf("\t\t\t2. -> Paper\n");
	printf("\t\t\t3. -> Scissor\n");
	sleep(2);
}
