#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COMPUTER 1
#define HUMAN 2
#define SIDE 3
#define COMPUTERMOVE 'O'
#define HUMANMOVE 'X'



int main()
{
	// Let us play the game with COMPUTER starting first
	playTicTacToe(COMPUTER);

	return 0;
}
