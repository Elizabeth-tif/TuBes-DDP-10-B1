#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#define SIZE3 9
#define SIZE5 25
#define SIZE7 49
#define ENTER_KEY 13
#define ARROW_DOWN 80
#define ARROW_UP 72
#define MAX_MENU_ITEMS 3
#define MIN_MENU_ITEMS 1
#define MAX_MENU_BACK 4

typedef struct PLAYER
{
    char nama[10];
    int score;
}PLAYER;

void pointer(int realPosition, int arrowPosition, const char *text);
void TeksAwal();
void aturanBestOF();
void aturanBoard();
void menuAwal();
void subMenu();
void menuAkhir();
void bestOf();
void bestOfP();
int chooseBoard();
void initialize(int board[], int SIZE);
void inputPlayer(PLAYER *player, int playerNumber);
void printBoard(int board[], int Size);
bool MoveLeft(int board[], int i, int player, bool gameOver);
bool checkWin(int array[], int Size);
void randMove(int array[], int SIZE);
void compMove(int array[], int SIZE);
void playTTT(int board[], int SIZE);
void playP(int baord[], int SIZE);

void loadHighScore(PLAYER *players, int maxPlayerss, const char *filename);
void saveHighScore(PLAYER *players, int numPlayers, const char *filename);
FILE *generateFile(const char file_name[], const char mode[]);

const char *filename = "high_scores.dat";
const int maxPlayers = 9999;

PLAYER players[2];

void demo(int board[], int SIZE);
void compDemo(int array[], int SIZE, int turn);
void randDemo(int array[], int SIZE, int turn);
int papanDemo[9];

