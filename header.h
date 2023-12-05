#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COMPUTER 1
#define HUMAN 2
#define SIDE 3
#define COMPUTERMOVE 'O'
#define HUMANMOVE 'X'

struct Move
{
	int row, col;
};

char player = 'x', opponent = 'o';

bool isMovesLeft(char board[3][3]);
int evaluate(char b[3][3]);
int minimax(char board[3][3], int depth, bool isMax);
struct Move findBestMove(char board[3][3]);
void showBoard(char board[][SIDE]);
void showInstructions();
void initialise(char board[][SIDE], int moves[]);
void declareWinner(int whoseTurn);
int rowCrossed(char board[][SIDE]);
int columnCrossed(char board[][SIDE]);
int diagonalCrossed(char board[][SIDE]);
int gameOver(char board[][SIDE]);
void playTicTacToe(int whoseTurn);

