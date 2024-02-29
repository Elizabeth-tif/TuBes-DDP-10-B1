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
#include "header.h"


void pointer(int realPosition, int arrowPosition, const char *text){
  if (realPosition == arrowPosition)
  {
    printf("\033[0;32m"); // Set color to green

    printf("%s", text);
    printf("\033[0m"); // Reset color
  }
  else
  {
    printf("");
  }
}


void TeksAwal(){
	printf ("                                                                       CREATED BY SIRKEL WAREG\n\n");
	
	
  printf("||============================================================================================================================================================||\n");
  printf("||                                               \033[0;35m88888888888 d8b      88888888888            88888888888\033[0m                                                      ||\n");
  printf("||                                                   \033[0;35m888     Y8P          888                    888\033[0m                                                          ||\n");
  printf("||                                                   \033[0;35m888                  888                    888\033[0m                                                          ||\n");
  printf("||                                                   \033[0;35m888     888  .d8888b 888   8888b.   .d8888b 888   .d88b.   .d88b.\033[0m                                        ||\n");
  printf("||                                                   \033[0;35m888     888 d88P     888      88b  d88P     888  d88  88b d8P  Y8b\033[0m                                       ||\n");
  printf("||                                                   \033[0;35m888     888 888      888  .d888888 888      888  888  888 88888888\033[0m                                       ||\n");
  printf("||                                                   \033[0;35m888     888 Y88b.    888  888  888 Y88b.    888  Y88..88P Y8b.\033[0m                                           ||\n");
  printf("||                                                   \033[0;35m888     888   Y8888P 888   Y888888   Y8888P 888    Y88P    Y888\033[0m                                          ||\n");
  printf("||============================================================================================================================================================||\n");
}

void aturanBestOF(){
  printf("||============================================================================================================================================================||\n");
  printf("||                                                                                                                                                            ||\n");
  printf("||                                                                              Pemilihan Best Of                                                             ||\n");
  printf("||                                                                                                                                                            ||\n");
  printf("||                                                                                  Best Of 1                                                                 ||\n");
  printf("||                                                         kamu hanya perlu memenangkan satu pertandingan untuk menjadi pemenang.                             ||\n");
  printf("||                                                   Setelah satu pertandingan selesai, permainan berakhir dan pemenangnya ditentukan.                        ||\n");
  printf("||                                                                                                                                                            ||\n");
  printf("||                                                                                  Best Of 3                                                                 ||\n");
  printf("||                                                   Kamu perlu memenangkan dua pertandingan dari tiga pertandingan yang mungkin terjadi.                     ||\n");
  printf("||                                           Setelah dua kemenangan, pemain tersebut dianggap sebagai pemenang best of 3, dan permainan berakhir.             ||\n");
  printf("||                                                                                                                                                            ||\n");
  printf("||                                                                                  Best Of 5                                                                 ||\n");
  printf("||                                                   Kamu perlu memenangkan tiga pertandingan dari lima pertandingan yang mungkin terjadi.                    ||\n");
  printf("||                                           Setelah tiga kemenangan, pemain tersebut dianggap sebagai pemenang best of 5, dan permainan berakhir.            ||\n");
  printf("||                                                                                                                                                            ||\n");
  printf("||============================================================================================================================================================||\n");
}

void aturanBoard(){
  printf("||============================================================================================================================================================||\n");
  printf("||                                                                     Silahkan Memilih Board                                                                 ||\n");
  printf("||                                                                                                                                                            ||\n");
  printf("||                                                                           Board 3x3                                                                        ||\n");
  printf("||                                                                          1 |  2 |  3                                                                       ||\n");
  printf("||                                                                        ---------------                                                                     ||\n");
  printf("||                                                                          4 |  5 |  6                                                                       ||\n");
  printf("||                                                                        ---------------                                                                     ||\n");
  printf("||                                                                          7 |  8 |  9                                                                       ||\n");
  printf("||                                                                                                                                                            ||\n");
  printf("||                                                                           Board 5x5                                                                        ||\n");
  printf("||                                                                     1 |  2 |  3 |  4 |  5                                                                  ||\n");
  printf("||                                                                   -------------------------                                                                ||\n");
  printf("||                                                                     6 |  7 |  8 |  9 | 10                                                                  ||\n");
  printf("||                                                                   -------------------------                                                                ||\n");
  printf("||                                                                    11 | 12 | 13 | 14 | 15                                                                  ||\n");
  printf("||                                                                   -------------------------                                                                ||\n");
  printf("||                                                                    16 | 17 | 18 | 19 | 20                                                                  ||\n");
  printf("||                                                                   -------------------------                                                                ||\n");
  printf("||                                                                    21 | 22 | 23 | 24 | 25                                                                  ||\n");
  printf("||                                                                                                                                                            ||\n");
  printf("||                                                                           Board 7x7                                                                        ||\n");
  printf("||                                                                1 |  2 |  3 |  4 |  5 |  6 |  7                                                             ||\n");
  printf("||                                                              -----------------------------------                                                           ||\n");
  printf("||                                                                8 |  9 | 10 | 11 | 12 | 13 | 14                                                             ||\n");
  printf("||                                                              -----------------------------------                                                           ||\n");
  printf("||                                                               15 | 16 | 17 | 18 | 19 | 20 | 21                                                             ||\n");
  printf("||                                                              -----------------------------------                                                           ||\n");
  printf("||                                                               22 | 23 | 24 | 25 | 26 | 27 | 28                                                             ||\n");
  printf("||                                                              -----------------------------------                                                           ||\n");
  printf("||                                                               29 | 30 | 31 | 32 | 33 | 34 | 35                                                             ||\n");
  printf("||                                                              -----------------------------------                                                           ||\n");
  printf("||                                                               36 | 37 | 38 | 39 | 40 | 41 | 42                                                             ||\n");
  printf("||                                                              -----------------------------------                                                           ||\n");
  printf("||                                                               43 | 44 | 45 | 46 | 47 | 48 | 49                                                             ||\n");
  printf("||============================================================================================================================================================||\n");
}

void caraPakaiMenuAwal()
{
    printf("||============================================================================================================================================================||\n");
    printf("||                                                                                                                                                              ||\n");
    printf("||                                                             Keterangan Menu                                                                                  ||\n");
    printf("||                                                                                                                                                              ||\n");
    printf("||                                         Silahkan menggunakan Arrow Up and Down untuk memilih menu                                                            ||\n");
    printf("||                                                       Keterangan menu sebagai berikut                                                                        ||\n");
    printf("||                                                                  Mulai                                                                                       ||\n");
    printf("||                                                                  Demo                                                                                        ||\n");
    printf("||                                                                  Exit                                                                                        ||\n");
    printf("||==============================================================================================================================================================||\n");
}

void menuAwal(){
  int posisi = 1;
  int keyPressed = 0;
	system("cls");
    caraPakaiMenuAwal();
    getch();

  while (keyPressed != ENTER_KEY) // pengkondisian selama bukan enter
  {
    system("cls");
    TeksAwal();

    printf("\n\n\n\n");

    // pointer(1, posisi, "||============================================================================================================================================================||\n");
    pointer(1, posisi, "                                                    Y88b         888b     d888          888          d8b         d88P \n");
    pointer(1, posisi, "                                                     Y88b        8888b   d8888          888          Y8P        d88P  \n");
    pointer(1, posisi, "                                                      Y88b       88888b.d88888          888                    d88P   \n");
    pointer(1, posisi, "                                                       Y88b      888Y88888P888 888  888 888  8888b.  888      d88P     \n");
    pointer(1, posisi, "                                                       d88P      888 Y888P 888 888  888 888     \"88b 888      Y88b                          \n");
    pointer(1, posisi, "                                                      d88P       888  Y8P  888 888  888 888 .d888888 888       Y88b                                             \n");
    pointer(1, posisi, "                                                     d88P        888   \"   888 Y88b 888 888 888  888 888        Y88b  \n");
    pointer(1, posisi, "                                                    d88P         888       888  \"Y88888 888 \"Y888888 888         Y88b \n");
    // pointer(1, posisi, "||============================================================================================================================================================||\n");

    // pointer(2, posisi, "||============================================================================================================================================================||\n");
    pointer(2, posisi, "                                                   Y88b         8888888b.                                          d88P \n");
    pointer(2, posisi, "                                                    Y88b        888  \"Y88b                                        d88P  \n");
    pointer(2, posisi, "                                                     Y88b       888    888                                       d88P   \n");
    pointer(2, posisi, "                                                      Y88b      888    888  .d88b.  88888b.d88b.   .d88b.       d88P    \n");
    pointer(2, posisi, "                                                      d88P      888    888 d8P  Y8b 888 \"888 \"88b d88\"\"88b      Y88b    \n");
    pointer(2, posisi, "                                                     d88P       888    888 88888888 888  888  888 888  888       Y88b   \n");
    pointer(2, posisi, "                                                    d88P        888  .d88P Y8b.     888  888  888 Y88..88P        Y88b  \n");
    pointer(2, posisi, "                                                   d88P         8888888P\"   \"Y8888  888  888  888  \"Y88P\"          Y88b \n");
    // pointer(2, posisi, "||============================================================================================================================================================||\n");

    // pointer(3, posisi, "||============================================================================================================================================================||\n");
    pointer(3, posisi, "                                                   Y88b         8888888888          d8b 888            d88P \n");
    pointer(3, posisi, "                                                    Y88b        888                 Y8P 888           d88P  \n");
    pointer(3, posisi, "                                                     Y88b       888                     888          d88P   \n");
    pointer(3, posisi, "                                                      Y88b      8888888    888  888 888 888888      d88P    \n");
    pointer(3, posisi, "                                                      d88P      888        `Y8bd8P' 888 888         Y88b    \n");
    pointer(3, posisi, "                                                     d88P       888          X88K   888 888          Y88b   \n");
    pointer(3, posisi, "                                                    d88P        888        .d8\"\"8b. 888 Y88b.         Y88b  \n");
    pointer(3, posisi, "                                                   d88P         8888888888 888  888 888  \"Y888         Y88b \n");
    // pointer(3, posisi, "||============================================================================================================================================================||\n");
    keyPressed = getch();

    // Clear input buffer
    if (keyPressed == 80 && posisi != MAX_MENU_ITEMS)
    {
      system("cls");
      posisi++;
    }
    else if (keyPressed == 72 && posisi != MIN_MENU_ITEMS)
    {
      posisi--;
    }
    else if (keyPressed == 13)
    { // Enter key
      switch (posisi)
      {
    case 1:
        subMenu(); // Call subMenu if "Mulai Bermain" is selected
        break;
	case 2:
		initialize(papanDemo, SIZE3);
		demo(papanDemo, SIZE3);
		break;
	case 3:
		exit(0);
		break;
        // Add cases for other menu options if needed
      }
    }
  }
}

void caraPakaiSubMenu()
{
    printf("||================================================================================================================================================================||\n");
    printf("||                                                                                                                                                              ||\n");
    printf("||                                                             Keterangan Menu                                                                                  ||\n");
    printf("||                                                                                                                                                              ||\n");
    printf("||                                         Silahkan menggunakan Arrow Up and Down untuk memilih menu                                                            ||\n");
    printf("||                                                       Keterangan menu sebagai berikut                                                                        ||\n");
    printf("||                                                            Player VS Player                                                                                  ||\n");
    printf("||                                                              Player VS Bot                                                                                   ||\n");
    printf("||                                                               To Main Menu                                                                                   ||\n");
    printf("||==============================================================================================================================================================||\n");
}


void subMenu(){
  int posisi = 1;
  int keyPressed = 0;
	system("cls");
    caraPakaiSubMenu();
    getch();
	
  while (keyPressed != ENTER_KEY)
  {

    system("cls");
    TeksAwal();

    printf("\n\n\n\n");

    // pointer(1, posisi, "||============================================================================================================================================================||\n");
    pointer(1, posisi, "Y88b         8888888b.  888                                         888     888  .d8888b.       8888888b.  888                                            d88P \n");
    pointer(1, posisi, " Y88b        888   Y88b 888                                         888     888 d88P  Y88b      888   Y88b 888                                           d88P  \n");
    pointer(1, posisi, "  Y88b       888    888 888                                         888     888 Y88b.           888    888 888                                          d88P   \n");
    pointer(1, posisi, "   Y88b      888   d88P 888  8888b.  888  888  .d88b.  888d888      Y88b   d88P  \"Y888b.        888   d88P 888  8888b.  888  888  .d88b.  888d888      d88P    \n");
    pointer(1, posisi, "   d88P      8888888P\"  888     \"88b 888  888 d8P  Y8b 888P\"         Y88b d88P      \"Y88b.      8888888P\"  888     \"88b 888  888 d8P  Y8b 888P\"        Y88b    \n");
    pointer(1, posisi, "  d88P       888        888 .d888888 888  888 88888888 888            Y88o88P         \"888      888        888 .d888888 888  888 88888888 888           Y88b   \n");
    pointer(1, posisi, " d88P        888        888 888  888 Y88b 888 Y8b.     888             Y888P    Y88b  d88P      888        888 888  888 Y88b 888 Y8b.     888            Y88b  \n");
    pointer(1, posisi, "d88P         888        888 \"Y888888  \"Y88888  \"Y8888  888              Y8P      \"Y8888P\"       888        888 \"Y888888  \"Y88888  \"Y8888  888             Y88b \n");
    pointer(1, posisi, "                                          888                                                                                888                                \n");
    pointer(1, posisi, "                                     Y8b d88P                                                                           Y8b d88P                                \n");
    pointer(1, posisi, "                                      \"Y88P\"                                                                             \"Y88P\"                                 \n");

    // pointer(1, posisi, "||============================================================================================================================================================||\n");

    printf("\n\n");

    // pointer(2, posisi, "||============================================================================================================================================================||\n");
    pointer(2, posisi, "Y88b         8888888b.  888                                         888     888  .d8888b.       888888b.            888            d88P \n");
    pointer(2, posisi, " Y88b        888   Y88b 888                                         888     888 d88P  Y88b      888  \"88b           888           d88P  \n");
    pointer(2, posisi, "  Y88b       888    888 888                                         888     888 Y88b.           888  .88P           888          d88P   \n");
    pointer(2, posisi, "   Y88b      888   d88P 888  8888b.  888  888  .d88b.  888d888      Y88b   d88P  \"Y888b.        8888888K.   .d88b.  888888      d88P    \n");
    pointer(2, posisi, "   d88P      8888888P\"  888     \"88b 888  888 d8P  Y8b 888P\"         Y88b d88P      \"Y88b.      888  \"Y88b d88\"\"88b 888         Y88b    \n");
    pointer(2, posisi, "  d88P       888        888 .d888888 888  888 88888888 888            Y88o88P         \"888      888    888 888  888 888          Y88b   \n");
    pointer(2, posisi, " d88P        888        888 888  888 Y88b 888 Y8b.     888             Y888P    Y88b  d88P      888   d88P Y88..88P Y88b.         Y88b  \n");
    pointer(2, posisi, "d88P         888        888 \"Y888888  \"Y88888  \"Y8888  888              Y8P      \"Y8888P\"       8888888P\"   \"Y88P\"   \"Y888         Y88b \n");
    pointer(2, posisi, "                                          888                                                                                           \n");
    pointer(2, posisi, "                                     Y8b d88P                                                                                           \n");
    pointer(2, posisi, "                                      \"Y88P\"                                                                                            \n");

    // pointer(2, posisi, "||============================================================================================================================================================||\n");

    printf("\n\n");
    // pointer(3, posisi, "||============================================================================================================================================================||\n");
    pointer(3, posisi, "Y88b         88888888888            888b     d888          d8b               888b     d888                                    d88P \n");
    pointer(3, posisi, " Y88b            888                8888b   d8888          Y8P               8888b   d8888                                   d88P  \n");
    pointer(3, posisi, "  Y88b           888                88888b.d88888                            88888b.d88888                                  d88P   \n");
    pointer(3, posisi, "   Y88b          888   .d88b.       888Y88888P888  8888b.  888 88888b.       888Y88888P888  .d88b.  88888b.  888  888      d88P    \n");
    pointer(3, posisi, "   d88P          888  d88\"\"88b      888 Y888P 888     \"88b 888 888 \"88b      888 Y888P 888 d8P  Y8b 888 \"88b 888  888      Y88b    \n");
    pointer(3, posisi, "  d88P           888  888  888      888  Y8P  888 .d888888 888 888  888      888  Y8P  888 88888888 888  888 888  888       Y88b   \n");
    pointer(3, posisi, " d88P            888  Y88..88P      888   \"   888 888  888 888 888  888      888   \"   888 Y8b.     888  888 Y88b 888        Y88b  \n");
    pointer(3, posisi, "d88P             888   \"Y88P\"       888       888 \"Y888888 888 888  888      888       888  \"Y8888  888  888  \"Y88888         Y88b \n");

    // pointer(3, posisi, "||============================================================================================================================================================||\n");

    keyPressed = getch();

    // Clear input buffer
    if (keyPressed == 80 && posisi != MAX_MENU_ITEMS)
    {
      posisi++;
    }
    else if (keyPressed == 72 && posisi != MIN_MENU_ITEMS)
    {
      posisi--;
    }
    else if (keyPressed == 13)
    { // Enter key
      switch (posisi)
      {
      case 1:
        bestOfP(); // Call subMenu if "Mulai Bermain" is selected
        break;
      case 2:
        bestOf();
        break;
      case 3:
        menuAwal();
        break;

        // Add cases for other menu options if needed
      }
    }
  }
}

void bestOf(){
  int posisi = 1;
  int keyPressed = 0;
  int BO;

  while (keyPressed != ENTER_KEY)
  {

    system("cls");
    TeksAwal();
    aturanBestOF();

    printf("\n\n\n\n");
    // pointer(1, posisi, "||============================================================================================================================================================||\n");
    pointer(1, posisi, "                                                Y88b         888888b.                     888          .d88888b.   .d888       d888   \n");
    pointer(1, posisi, "                                                 Y88b        888  \"88b                    888         d88P\" \"Y88b d88P\"       d8888   \n");
    pointer(1, posisi, "                                                  Y88b       888  .88P                    888         888     888 888           888   \n");
    pointer(1, posisi, "                                                   Y88b      8888888K.   .d88b.  .d8888b  888888      888     888 888888        888   \n");
    pointer(1, posisi, "                                                   d88P      888  \"Y88b d8P  Y8b 88K      888         888     888 888           888   \n");
    pointer(1, posisi, "                                                  d88P       888    888 88888888 \"Y8888b. 888         888     888 888           888   \n");
    pointer(1, posisi, "                                                 d88P        888   d88P Y8b.          X88 Y88b.       Y88b. .d88P 888           888   \n");
    pointer(1, posisi, "                                                d88P         8888888P\"   \"Y8888   88888P'  \"Y888       \"Y88888P\"  888         8888888 \n");

    // pointer(1, posisi, "||============================================================================================================================================================||\n");

    // pointer(2, posisi, "||============================================================================================================================================================||\n");
    pointer(2, posisi, "                                                 Y88b         888888b.                     888          .d88888b.   .d888       .d8888b.  \n");
    pointer(2, posisi, "                                                  Y88b        888  \"88b                    888         d88P\" \"Y88b d88P\"       d88P  Y88b \n");
    pointer(2, posisi, "                                                   Y88b       888  .88P                    888         888     888 888              .d88P  \n");
    pointer(2, posisi, "                                                    Y88b      8888888K.   .d88b.  .d8888b  888888      888     888 888888          8888\"  \n");
    pointer(2, posisi, "                                                    d88P      888  \"Y88b d8P  Y8b 88K      888         888     888 888              \"Y8b. \n");
    pointer(2, posisi, "                                                   d88P       888    888 88888888 \"Y8888b. 888         888     888 888         888    888 \n");
    pointer(2, posisi, "                                                  d88P        888   d88P Y8b.          X88 Y88b.       Y88b. .d88P 888         Y88b  d88P \n");
    pointer(2, posisi, "                                                 d88P         8888888P\"   \"Y8888   88888P'  \"Y888       \"Y88888P\"  888          \"Y8888P\"  \n");

    // pointer(2, posisi, "||============================================================================================================================================================||\n");

    // pointer(3, posisi, "||============================================================================================================================================================||\n");
    pointer(3, posisi, "                                                 Y88b         888888b.                     888          .d88888b.   .d888      888888888  \n");
    pointer(3, posisi, "                                                  Y88b        888  \"88b                    888         d88P\" \"Y88b d88P\"       888        \n");
    pointer(3, posisi, "                                                   Y88b       888  .88P                    888         888     888 888         888        \n");
    pointer(3, posisi, "                                                    Y88b      8888888K.   .d88b.  .d8888b  888888      888     888 888888      8888888b.  \n");
    pointer(3, posisi, "                                                    d88P      888  \"Y88b d8P  Y8b 88K      888         888     888 888              \"Y88b \n");
    pointer(3, posisi, "                                                   d88P       888    888 88888888 \"Y8888b. 888         888     888 888                888 \n");
    pointer(3, posisi, "                                                  d88P        888   d88P Y8b.          X88 Y88b.       Y88b. .d88P 888         Y88b  d88P \n");
    pointer(3, posisi, "                                                 d88P         8888888P\"   \"Y8888   88888P'  \"Y888       \"Y88888P\"  888          \"Y8888P\"  \n");
    // pointer(3, posisi, "||============================================================================================================================================================||\n");

    // pointer(4, posisi, "||============================================================================================================================================================||\n");
    pointer(4, posisi, "                                                   Y88b         888888b.                     888      \n");
    pointer(4, posisi, "                                                    Y88b        888  \"88b                    888      \n");
    pointer(4, posisi, "                                                     Y88b       888  .88P                    888      \n");
    pointer(4, posisi, "                                                      Y88b      8888888K.   8888b.   .d8888b 888  888 \n");
    pointer(4, posisi, "                                                      d88P      888  \"Y88b     \"88b d88P\"    888 .88P \n");
    pointer(4, posisi, "                                                     d88P       888    888 .d888888 888      888888K  \n");
    pointer(4, posisi, "                                                    d88P        888   d88P 888  888 Y88b.    888 \"88b \n");
    pointer(4, posisi, "                                                  d88P         8888888P\"  \"Y888888  \"Y8888P 888  888 \n");
    // pointer(4, posisi, "||============================================================================================================================================================||\n");
    keyPressed = getch();

    // Clear input buffer
    if (keyPressed == 80 && posisi != MAX_MENU_BACK)
    {
      posisi++;
    }
    else if (keyPressed == 72 && posisi != MIN_MENU_ITEMS)
    {
      posisi--;
    }
    else if (keyPressed == 13)
    { // Enter key
      switch (posisi)
      {
      case 1:
        {
        	int SIZE = chooseBoard();
            int board[SIZE];
			inputPlayer(&players[0], 1);
            initialize(board, SIZE);
            playTTT(board, SIZE);
			menuAkhir();
		}
        break;
      case 2:
        {
        	int SIZE = chooseBoard();
            int board[SIZE];
            inputPlayer(&players[0], 1);

            for (BO = 0; BO < 3;)
            {
            	initialize(board, SIZE);
                playTTT(board, SIZE);
                BO += 1;
            }
            menuAkhir();
		}
        break;
      case 3:
        {
        	int SIZE = chooseBoard();
            int board[SIZE];
            inputPlayer(&players[0], 1);

            for (BO = 0; BO < 5;)
            {
            	initialize(board, SIZE);
                playTTT(board, SIZE);
                BO += 1;
            }
            menuAkhir();
		}
        break;
      case 4:
        subMenu();
        break;

        // Add cases for other menu options if needed
      }
    }
  }
}

void bestOfP(){
  int posisi = 1;
  int keyPressed = 0;
  int BO;

  while (keyPressed != ENTER_KEY)
  {

    system("cls");
    TeksAwal();
    aturanBestOF();

    printf("\n\n\n\n");
    // pointer(1, posisi, "||============================================================================================================================================================||\n");
    pointer(1, posisi, "                                                Y88b         888888b.                     888          .d88888b.   .d888       d888   \n");
    pointer(1, posisi, "                                                 Y88b        888  \"88b                    888         d88P\" \"Y88b d88P\"       d8888   \n");
    pointer(1, posisi, "                                                  Y88b       888  .88P                    888         888     888 888           888   \n");
    pointer(1, posisi, "                                                   Y88b      8888888K.   .d88b.  .d8888b  888888      888     888 888888        888   \n");
    pointer(1, posisi, "                                                   d88P      888  \"Y88b d8P  Y8b 88K      888         888     888 888           888   \n");
    pointer(1, posisi, "                                                  d88P       888    888 88888888 \"Y8888b. 888         888     888 888           888   \n");
    pointer(1, posisi, "                                                 d88P        888   d88P Y8b.          X88 Y88b.       Y88b. .d88P 888           888   \n");
    pointer(1, posisi, "                                                d88P         8888888P\"   \"Y8888   88888P'  \"Y888       \"Y88888P\"  888         8888888 \n");

    // pointer(1, posisi, "||============================================================================================================================================================||\n");

    // pointer(2, posisi, "||============================================================================================================================================================||\n");
    pointer(2, posisi, "                                                 Y88b         888888b.                     888          .d88888b.   .d888       .d8888b.  \n");
    pointer(2, posisi, "                                                  Y88b        888  \"88b                    888         d88P\" \"Y88b d88P\"       d88P  Y88b \n");
    pointer(2, posisi, "                                                   Y88b       888  .88P                    888         888     888 888              .d88P  \n");
    pointer(2, posisi, "                                                    Y88b      8888888K.   .d88b.  .d8888b  888888      888     888 888888          8888\"  \n");
    pointer(2, posisi, "                                                    d88P      888  \"Y88b d8P  Y8b 88K      888         888     888 888              \"Y8b. \n");
    pointer(2, posisi, "                                                   d88P       888    888 88888888 \"Y8888b. 888         888     888 888         888    888 \n");
    pointer(2, posisi, "                                                  d88P        888   d88P Y8b.          X88 Y88b.       Y88b. .d88P 888         Y88b  d88P \n");
    pointer(2, posisi, "                                                 d88P         8888888P\"   \"Y8888   88888P'  \"Y888       \"Y88888P\"  888          \"Y8888P\"  \n");

    // pointer(2, posisi, "||============================================================================================================================================================||\n");

    // pointer(3, posisi, "||============================================================================================================================================================||\n");
    pointer(3, posisi, "                                                 Y88b         888888b.                     888          .d88888b.   .d888      888888888  \n");
    pointer(3, posisi, "                                                  Y88b        888  \"88b                    888         d88P\" \"Y88b d88P\"       888        \n");
    pointer(3, posisi, "                                                   Y88b       888  .88P                    888         888     888 888         888        \n");
    pointer(3, posisi, "                                                    Y88b      8888888K.   .d88b.  .d8888b  888888      888     888 888888      8888888b.  \n");
    pointer(3, posisi, "                                                    d88P      888  \"Y88b d8P  Y8b 88K      888         888     888 888              \"Y88b \n");
    pointer(3, posisi, "                                                   d88P       888    888 88888888 \"Y8888b. 888         888     888 888                888 \n");
    pointer(3, posisi, "                                                  d88P        888   d88P Y8b.          X88 Y88b.       Y88b. .d88P 888         Y88b  d88P \n");
    pointer(3, posisi, "                                                 d88P         8888888P\"   \"Y8888   88888P'  \"Y888       \"Y88888P\"  888          \"Y8888P\"  \n");
    // pointer(3, posisi, "||============================================================================================================================================================||\n");

    // pointer(4, posisi, "||============================================================================================================================================================||\n");
    pointer(4, posisi, "                                                   Y88b         888888b.                     888      \n");
    pointer(4, posisi, "                                                    Y88b        888  \"88b                    888      \n");
    pointer(4, posisi, "                                                     Y88b       888  .88P                    888      \n");
    pointer(4, posisi, "                                                      Y88b      8888888K.   8888b.   .d8888b 888  888 \n");
    pointer(4, posisi, "                                                      d88P      888  \"Y88b     \"88b d88P\"    888 .88P \n");
    pointer(4, posisi, "                                                     d88P       888    888 .d888888 888      888888K  \n");
    pointer(4, posisi, "                                                    d88P        888   d88P 888  888 Y88b.    888 \"88b \n");
    pointer(4, posisi, "                                                  d88P         8888888P\"  \"Y888888  \"Y8888P 888  888 \n");
    // pointer(4, posisi, "||============================================================================================================================================================||\n");
    keyPressed = getch();

    // Clear input buffer
    if (keyPressed == 80 && posisi != MAX_MENU_BACK)
    {
      posisi++;
    }
    else if (keyPressed == 72 && posisi != MIN_MENU_ITEMS)
    {
      posisi--;
    }
    else if (keyPressed == 13)
    { // Enter key
      switch (posisi)
      {
      case 1:
        {
        	int SIZE = chooseBoard();
            int board[SIZE];
            inputPlayer(&players[0], 1);
            inputPlayer(&players[1], 2);
            initialize(board, SIZE);
            playP(board, SIZE);
    		menuAkhir();
		}
        break;
      case 2:
        {
        	int SIZE = chooseBoard();
            int board[SIZE];
            inputPlayer(&players[0], 1);
            inputPlayer(&players[1], 2);

            for (BO = 0; BO < 3;)
            {
            	initialize(board, SIZE);
                playP(board, SIZE);
                BO += 1;
            }
    		menuAkhir();
		}
        break;
      case 3:
        {
        	int SIZE = chooseBoard();
            int board[SIZE];
            inputPlayer(&players[0], 1);
            inputPlayer(&players[1], 2);

            for (BO = 0; BO < 5;)
            {
            	initialize(board, SIZE);
                playP(board, SIZE);
                BO += 1;
            }
    		menuAkhir();
		}
        break;
      case 4:
        subMenu();
        break;

        // Add cases for other menu options if needed
      }
    }
  }
}

int chooseBoard(){
  int posisi = 1;
  int keyPressed = 0;

  while (keyPressed != ENTER_KEY)
  {

    system("cls");
    TeksAwal();
    aturanBoard();

    printf("\n\n\n\n");

    // pointer(1, posisi, "||============================================================================================================================================================||\n");
    pointer(1, posisi, "                                                    Y88b          .d8888b.            .d8888b.  \n");
    pointer(1, posisi, "                                                     Y88b        d88P  Y88b          d88P  Y88b \n");
    pointer(1, posisi, "                                                      Y88b            .d88P               .d88P \n");
    pointer(1, posisi, "                                                       Y88b          8888\"  888  888     8888\"  \n");
    pointer(1, posisi, "                                                       d88P           \"Y8b. `Y8bd8P'      \"Y8b. \n");
    pointer(1, posisi, "                                                      d88P       888    888   X88K   888    888 \n");
    pointer(1, posisi, "                                                    d88P        Y88b  d88P .d8\"\"8b. Y88b  d88P \n");
    pointer(1, posisi, "                                                   d88P          \"Y8888P\"  888  888  \"Y8888P\"  \n");

    // pointer(1, posisi, "||============================================================================================================================================================||\n");

    // pointer(2, posisi, "||============================================================================================================================================================||\n");
    pointer(2, posisi, "                                                   Y88b         888888888           888888888  \n");
    pointer(2, posisi, "                                                    Y88b        888                 888        \n");
    pointer(2, posisi, "                                                     Y88b       888                 888        \n");
    pointer(2, posisi, "                                                      Y88b      8888888b.  888  888 8888888b.  \n");
    pointer(2, posisi, "                                                      d88P           \"Y88b `Y8bd8P'      \"Y88b \n");
    pointer(2, posisi, "                                                     d88P              888   X88K          888 \n");
    pointer(2, posisi, "                                                    d88P        Y88b  d88P .d8\"\"8b. Y88b  d88P \n");
    pointer(2, posisi, "                                                   d88P          \"Y8888P\"  888  888  \"Y8888P\"  \n");

    // pointer(2, posisi, "||============================================================================================================================================================||\n");

    // pointer(3, posisi, "||============================================================================================================================================================||\n");
    pointer(3, posisi, "                                                   Y88b         8888888888         8888888888 \n");
    pointer(3, posisi, "                                                    Y88b              d88P               d88P \n");
    pointer(3, posisi, "                                                     Y88b            d88P               d88P  \n");
    pointer(3, posisi, "                                                      Y88b          d88P  888  888     d88P   \n");
    pointer(3, posisi, "                                                      d88P       88888888 `Y8bd8P'  88888888  \n");
    pointer(3, posisi, "                                                     d88P         d88P      X88K     d88P     \n");
    pointer(3, posisi, "                                                    d88P         d88P     .d8\"\"8b.  d88P      \n");
    pointer(3, posisi, "                                                  d88P         d88P      888  888 d88P       \n");

    // pointer(1, posisi, "||============================================================================================================================================================||\n");

    // pointer(1, posisi, "||============================================================================================================================================================||\n");
    pointer(4, posisi, "                                                   Y88b         888888b.                     888      \n");
    pointer(4, posisi, "                                                    Y88b        888  \"88b                    888      \n");
    pointer(4, posisi, "                                                     Y88b       888  .88P                    888      \n");
    pointer(4, posisi, "                                                      Y88b      8888888K.   8888b.   .d8888b 888  888 \n");
    pointer(4, posisi, "                                                      d88P      888  \"Y88b     \"88b d88P\"    888 .88P \n");
    pointer(4, posisi, "                                                     d88P       888    888 .d888888 888      888888K  \n");
    pointer(4, posisi, "                                                    d88P        888   d88P 888  888 Y88b.    888 \"88b \n");
    pointer(4, posisi, "                                                  d88P         8888888P\"  \"Y888888  \"Y8888P 888  888 \n");
    // pointer(1, posisi, "||============================================================================================================================================================||\n");
    keyPressed = getch();

    // Clear input buffer
    if (keyPressed == 80 && posisi != MAX_MENU_BACK)
    {
      posisi++;
    }
    else if (keyPressed == 72 && posisi != MIN_MENU_ITEMS)
    {
      posisi--;
    }
    else if (keyPressed == 13)
    { // Enter key
      switch (posisi)
      {
      case 1:
        return SIZE3;
        //break;
      case 2:
        return SIZE5;
        //
      case 3:
        return SIZE7;
        // break;
      case 4:
        bestOf();
        break;

        // Add cases for other menu options if needed
      }
    }
  }
}

void initialize(int board[], int SIZE){
    int i;
    for (i = 0; i < SIZE; ++i)
    {
        board[i] = 0;
    }
}

void inputPlayer(PLAYER *player, int playerNumber)
{
	system("cls");
    printf("Masukkan nama Player %d\n", playerNumber);
    printf("Player %d: ", playerNumber);
    scanf("%s", player->nama); // -> for pointer
    player->score = 0; // Initialize score jadi 0
}


void printBoard(int board[], int Size){
    int size = sqrt(Size);
    system("cls");
    int i,k;
    for (i = 0; i < size * size; ++i)
    {
        if (i % size == 0 && i != 0)
        {
            printf("\n");
            for ( k = 0; k < size; ++k)
            {
                printf("-----");
            }
            printf("\n");
        }
        if (board[i] == 0)
        {
            printf(" %2.d ", i+1);
        }
        else if (board[i] == 1)
        {
            printf("  X ");
        }
        else if (board[i] == 2)
        {
            printf("  O ");
        }
        if (i % size != size - 1)
        {
            printf("|");
        }
    }
    printf("\n\n");
}

bool MoveLeft(int board[], int i, int player, bool gameOver){
    if (gameOver) {
        return false;
    }

    if (board[i - 1] == 0)
    {
        return true;
    }
    return false;
}

bool checkWin(int array[], int Size){
    int i, j, k, l, m, cek;
    int temp;
    int size = sqrt(Size);

    if (size == 3) {
        l = 3;
        m = 0;
    } else if (size == 5) {
        l = 4;
        m = 1;
    } else if (size == 7) {
        l = 5;
        m = 2;
    }

    // Vertical win
    for (k = 0; k < size; k++) {
        for (j = 0; j < size; j++) {
            cek = 0;
            temp = array[j * size + k];
            for (i = 0; i < size; i++) {
                if ((temp == array[i * size + k]) && (array[i * size + k] != 0)) {
                    ++cek;
                    if (cek == l) {
                        return true;
                    }
                } else {
                    cek = 0;
                }
            }
        }
    }

    // Horizontal win
    for (k = 0; k < size; k++) {
        for (i = 0; i < size; i++) {
            cek = 0;
            temp = array[i * size + k];
            for (j = 0; j < size; j++) {
                if ((temp == array[i * size + j]) && (array[i * size + j] != 0)) {
                    ++cek;
                    if (cek == l) {
                        return true;
                    }
                } else {
                    cek = 0;
                }
            }
        }
    }

// Diagonal win (kiri atas ke kanan bawah)
for (j = 0; j <= m; j++) {
    for (k = 0; k <= size - l; k++) {  // Update this line
        cek = 0;
        temp = array[j * size + k];
        for (i = 0; i < l; i++) {
            if ((temp == array[(j + i) * size + (k + i)]) && (array[(j + i) * size + (k + i)] != 0)) {
                ++cek;
                if (cek == l) {
                    return true;
                }
            } else {
                cek = 0;
            }
        }
    }
}

// Diagonal win (kanan atas ke kiri bawah)
for (j = 0; j <= m; j++) {
    for (k = l - 1; k < size; k++) {  // Update this line
        cek = 0;
        temp = array[j * size + k];
        for (i = 0; i < l; i++) {
            if ((temp == array[(j + i) * size + (k - i)]) && (array[(j + i) * size + (k - i)] != 0)) {  // Update this line
                ++cek;
                if (cek == l) {
                    return true;
                }
            } else {
                cek = 0;
            }
        }
    }
}

    return false;
}

void randMove(int array[], int SIZE){
    // random number dibuat/diseed berdasarkan waktu
    srand(time(NULL));
    int randIndex;
    int i = 0;
	while (i == 0){
    randIndex = rand() % SIZE;
 	if (array[randIndex]== 0){
 		i += 1;
 	   array[randIndex] = 2;	
	 }
	}
}

void compMove(int array[], int SIZE){
    int i, j, k, l, m, cek;
    int temp;
    int size = sqrt(SIZE);
	bool assign = false;

    // Vertical win
    for (k = 0; k < size; k++) {
        for (j = 0; j < size; j++) {
            cek = 0;
            temp = array[j * size + k];
            for (i = 0; i < size; i++) {
            	if ((cek >= 2) && (array[(j + i) * size + (size - 1 - k - i)] == 0)){
                array[(j + i) * size + (size - 1 - k - i)] = 2;
				assign = true;
            	break;
            	}
				if ((temp == array[i * size + k]) && (array[i * size + k] != 0)) {
                    ++cek;
                }
            }
        }
    }

    // Horizontal win
    for (k = 0; k < size; k++) {
        for (i = 0; i < size; i++) {
            cek = 0;
            temp = array[i * size + k];
            for (j = 0; j < size; j++) {
            	if ((cek >= 2) && (array[(j + i) * size + (size - 1 - k - i)] == 0)) {		
           		array[(j + i) * size + (size - 1 - k - i)] = 2;
				assign = true;
            	break;
            	}
                if ((temp == array[i * size + j]) && (array[i * size + j] != 0)) {
                    ++cek;
                } 
            }
        }
    }

    // Diagonal win (kiri atas ke kanan bawah)
	for (j = 0; j <= m; j++) {
	    for (k = 0; k <= size - l; k++) {  // Update this line
	        cek = 0;
	        temp = array[j * size + k];
	        for (i = 0; i < l; i++) {
	        	if ((cek >= 2) && (array[(j + i) * size + (size - 1 - k - i)] == 0)){
	                array[(j + i) * size + (size - 1 - k - i)] = 2;
					assign = true;
	            	break;
	            	}
	            if ((temp == array[(j + i) * size + (k + i)]) && (array[(j + i) * size + (k + i)] != 0)) {
	                ++cek;
	            }
	        }
	    }
	}

// Diagonal win (kanan atas ke kiri bawah)
	for (j = 0; j <= m; j++) {
    	for (k = l - 1; k < size; k++) {  // Update this line
        	cek = 0;
        	temp = array[j * size + k];
        	for (i = 0; i < l; i++) {
        		if ((cek >= 2) && (array[(j + i) * size + (size - 1 - k - i)] == 0)){
                	array[(j + i) * size + (size - 1 - k - i)] = 2;
					assign = true;
            		break;
            	}
            	if ((temp == array[(j + i) * size + (k - i)]) && (array[(j + i) * size + (k - i)] != 0)) {  // Update this line
            	    ++cek;
            	    }
        	}
    	}
	}
    if (assign == false){
		randMove(array, SIZE);
	}
}

void playTTT(int board[], int SIZE){
    bool gameOver = false;
    int player = 1;
    int move;
    int i = 0;
	int size = sqrt(SIZE);

    while (!gameOver) {
    	TeksAwal();
        printBoard(board, SIZE);
        printf("Now is turn Player %d\n", player);
        printf("Masukkan Gerakan 1 - %d : ", SIZE);
        
        if (player == 1){
        	scanf("%d", &move);
        	
        	if (!MoveLeft(board, move, player, gameOver)) {
		    	system("cls");
		    	TeksAwal();
		    	printBoard(board, SIZE);
		    	printf("Invalid Move\n");
		    	getch();
		    	continue;  // Continue to the next iteration of the loop if the move is invalid
			}
			
			if (MoveLeft(board, move, player, gameOver)){
				board[move-1] = 1;
				i++;
			}
		}
		
		if (player == 2){
			compMove(board, SIZE);
			i++;
		}

		if (checkWin(board, SIZE)) {
			TeksAwal();
	    	printBoard(board, SIZE);
//    		printf("Player %d wins!\n", player);
    		if (player == 1){
    			printf("%s WIN", players[0].nama);
    			players[0].score += 100*size;
				getch();
			} else if (player == 2){
				printf("COMPUTER WIN");
				getch();
			}
			printf ("\n%s = %d ", players[0].nama, players[0].score);
    		getch();
    		gameOver = true;
//    		i = SIZE; // Reset the move count
		}else if (i == SIZE) {
   		 // The board is full, and no one has won, it's a draw
			TeksAwal();
    		printBoard(board, SIZE);
    		printf("It's a draw!\n");
    		getch();
    		gameOver = true;
    	//i = 0; // Reset the move count
		}
			player = (player == 1) ? 2 : 1; // Switch player
        	system("cls");
        }  
    
}

void playP(int board[], int SIZE)
{
    bool gameOver = false;
    int player = 1;
    int move;
    int i = 0;
	int size = sqrt(SIZE);
	
    while (!gameOver) {
        printBoard(board, SIZE);
        printf("Now is turn Player %d\n", player);
        printf("Masukkan Gerakan 1 - %d : ", SIZE);
        scanf("%d", &move);

        if (!MoveLeft(board, move, player, gameOver)) {
    	system("cls");
    	printBoard(board, SIZE);
    	printf("Invalid Move\n");
    	getch();
    	continue;  // Continue to the next iteration of the loop if the move is invalid
		}


        if (MoveLeft(board, move, player, gameOver)) {
            board[move - 1] = player;
            i++;

		if (checkWin(board, SIZE)) {
	    	printBoard(board, SIZE);
//    		printf("Player %d wins!\n", player);
    		if (player == 1){
    			printf("%s WIN", players[0].nama);
    			players[0].score += 100 * size;
    			getch();
			} else if (player == 2){
				printf("%s WIN", players[1].nama);
				players[1].score += 100 * size;
				getch();
			}
			printf ("\n%s = %d | %s = %d", players[0].nama, players[0].score, players[1].nama, players[1].score);
    		getch();
    		gameOver = true;
//    		i = SIZE; // Reset the move count
		}else if (i == SIZE) {
   		 // The board is full, and no one has won, it's a draw
    		printBoard(board, SIZE);
    		printf("It's a draw!\n");
    		gameOver = true;
    	//i = 0; // Reset the move count
		}
			player = (player == 1) ? 2 : 1; // Switch player
        }  
        system("cls");
    }
}

FILE *generateFile(const char file_name[], const char mode[])
{
    FILE *file = fopen(file_name, mode);

    if (file == NULL)
    {
        perror("Error opening file");
        exit(1);
    }

    return file;
}

void saveHighScore(PLAYER *players, int numPlayers, const char *filename)
{
    FILE *file = fopen(filename, "a");
    int i;
    if (file == NULL)
    {
		generateFile("high_scores.dat", "w");
        exit(1);
    }

    // Write the player data to the file
    for (i = 0; i <= 2;)
    {
        fprintf(file, "%s#%d\n", players[i].nama, players[i].score);
        i++;
    }

    fclose(file);
}

void loadHighScore(PLAYER *players, int maxPlayerss, const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening file for reading");
        exit(1);
    }

    int numPlayers = 0;
    while (numPlayers < maxPlayerss && fscanf(file, "%[^#]#%d\n", players[numPlayers].nama, &players[numPlayers].score) == 2 && !EOF)
    {
        numPlayers++;
    }

    fclose(file);
}

void sortHighScore(PLAYER *players, int numPlayers)
{
	int i,j;
    // Simple bubble sort for demonstration purposes
    for (i = 0; i <= 10; ++i)
    {
        for (j = 0; j <= 1; ++j)
        {
            if (players[j].score < players[j + 1].score)
            {
                // Swap players if they are out of order
                PLAYER temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
}

void menuAkhir(){
	int i;
    saveHighScore(players, 2, filename);
    loadHighScore(players, maxPlayers, filename);
	sortHighScore(players, 50);
	
    printf("\nHigh Scores Leaderboard:\n");
    for (i = 0; i <= 2; ++i)
    {
        printf("Name: %s, Score: %d\n", players[i].nama, players[i].score);
    }
	int posisi = 1;
	int keyPressed = 0;
	getch();
  while (keyPressed != ENTER_KEY)
  {
    system("cls");
    TeksAwal();
    pointer(1, posisi, "Y88b         88888888888            888b     d888          d8b               888b     d888                                    d88P \n");
    pointer(1, posisi, " Y88b            888                8888b   d8888          Y8P               8888b   d8888                                   d88P  \n");
    pointer(1, posisi, "  Y88b           888                88888b.d88888                            88888b.d88888                                  d88P   \n");
    pointer(1, posisi, "   Y88b          888   .d88b.       888Y88888P888  8888b.  888 88888b.       888Y88888P888  .d88b.  88888b.  888  888      d88P    \n");
    pointer(1, posisi, "   d88P          888  d88\"\"88b      888 Y888P 888     \"88b 888 888 \"88b      888 Y888P 888 d8P  Y8b 888 \"88b 888  888      Y88b    \n");
    pointer(1, posisi, "  d88P           888  888  888      888  Y8P  888 .d888888 888 888  888      888  Y8P  888 88888888 888  888 888  888       Y88b   \n");
    pointer(1, posisi, " d88P            888  Y88..88P      888   \"   888 888  888 888 888  888      888   \"   888 Y8b.     888  888 Y88b 888        Y88b  \n");
    pointer(1, posisi, "d88P             888   \"Y88P\"       888       888 \"Y888888 888 888  888      888       888  \"Y8888  888  888  \"Y88888         Y88b \n");

    pointer(2, posisi, "Y88b         8888888888          d8b 888            d88P \n");
    pointer(2, posisi, " Y88b        888                 Y8P 888           d88P  \n");
    pointer(2, posisi, "  Y88b       888                     888          d88P   \n");
    pointer(2, posisi, "   Y88b      8888888    888  888 888 888888      d88P    \n");
    pointer(2, posisi, "   d88P      888        `Y8bd8P' 888 888         Y88b    \n");
    pointer(2, posisi, "  d88P       888          X88K   888 888          Y88b   \n");
    pointer(2, posisi, " d88P        888        .d8\"\"8b. 888 Y88b.         Y88b  \n");
    pointer(2, posisi, "d88P         8888888888 888  888 888  \"Y888         Y88b \n");
    keyPressed = getch();

    // Clear input buffer
    if (keyPressed == 80 && posisi != MAX_MENU_BACK)
    {
      posisi++;
    }
    else if (keyPressed == 72 && posisi != MIN_MENU_ITEMS)
    {
      posisi--;
    }
    else if (keyPressed == 13)
    { // Enter key
      switch (posisi)
      {
      case 1:
     	menuAwal();
        break;
      case 2:
        exit(0);
        break;
      }
    }
  }
}

void randDemo(int array[], int SIZE, int turn){
    // random number dibuat/diseed berdasarkan waktu
    srand(time(NULL));
    int randIndex;
    int i = 0;
	while (i == 0){
    randIndex = rand() % SIZE;
 	if (array[randIndex]== 0){
 		i += 1;
 	   array[randIndex] = turn;	
	 }
	}
}

void compDemo(int array[], int SIZE, int turn){
    int i, j, k, l, m, cek;
    int temp;
    int size = sqrt(SIZE);
	bool assign = false;

    // Vertical win
    for (k = 0; k < size; k++) {
        for (j = 0; j < size; j++) {
            cek = 0;
            temp = array[j * size + k];
            for (i = 0; i < size; i++) {
            	if ((cek >= 2) && (array[(j + i) * size + (size - 1 - k - i)] == 0)){
                array[(j + i) * size + (size - 1 - k - i)] = turn;
				assign = true;
            	break;
            	}
				if ((temp == array[i * size + k]) && (array[i * size + k] != 0)) {
                    ++cek;
                }
            }
        }
    }

    // Horizontal win
    for (k = 0; k < size; k++) {
        for (i = 0; i < size; i++) {
            cek = 0;
            temp = array[i * size + k];
            for (j = 0; j < size; j++) {
            	if ((cek >= 2) && (array[(j + i) * size + (size - 1 - k - i)] == 0)) {		
           		array[(j + i) * size + (size - 1 - k - i)] = turn;
				assign = true;
            	break;
            	}
                if ((temp == array[i * size + j]) && (array[i * size + j] != 0)) {
                    ++cek;
                } 
            }
        }
    }

    // Diagonal win (kiri atas ke kanan bawah)
	for (j = 0; j <= m; j++) {
	    for (k = 0; k <= size - l; k++) {  // Update this line
	        cek = 0;
	        temp = array[j * size + k];
	        for (i = 0; i < l; i++) {
	        	if ((cek >= 2) && (array[(j + i) * size + (size - 1 - k - i)] == 0)){
	                array[(j + i) * size + (size - 1 - k - i)] = turn;
					assign = true;
	            	break;
	            	}
	            if ((temp == array[(j + i) * size + (k + i)]) && (array[(j + i) * size + (k + i)] != 0)) {
	                ++cek;
	            }
	        }
	    }
	}

// Diagonal win (kanan atas ke kiri bawah)
	for (j = 0; j <= m; j++) {
    	for (k = l - 1; k < size; k++) {  // Update this line
        	cek = 0;
        	temp = array[j * size + k];
        	for (i = 0; i < l; i++) {
        		if ((cek >= 2) && (array[(j + i) * size + (size - 1 - k - i)] == 0)){
                	array[(j + i) * size + (size - 1 - k - i)] = turn;
					assign = true;
            		break;
            	}
            	if ((temp == array[(j + i) * size + (k - i)]) && (array[(j + i) * size + (k - i)] != 0)) {  // Update this line
            	    ++cek;
            	    }
        	}
    	}
	}
    if (assign == false){
		randDemo(array, SIZE, turn);
	}
}

void carademo()
{
    printf("||============================================================================================================================================================||\n");
    printf("||                                                                                                                                                              ||\n");
    printf("||                                                             Keterangan Demo                                                                                  ||\n");
    printf("||                                                                                                                                                              ||\n");
    printf("||                                                            Bot akan saling bermain                                                                           ||\n");
    printf("||                                Silahkan tekan tombol apa saja untuk melihat cara bermain yang akan dilakukan oleh board                                      ||\n");
    printf("||==============================================================================================================================================================||\n");
}

void demo(int board[], int SIZE){
    bool gameOver = false;
    int player = 1;
    int move;
    int i = 0;
	int size = sqrt(SIZE);
	system("cls");
    carademo();
    getch();

    while (!gameOver) {
		printBoard(board, SIZE);
		printf("\nPress any button to see COMPUTER's moves!");
        if (player == 1){
        	compDemo(board, SIZE, player);
			i++;
		}
		getch();
		if (player == 2){
			compDemo(board, SIZE, player);
			i++;
		}

		if (checkWin(board, SIZE)) {
			TeksAwal();
	    	printBoard(board, SIZE);
//    		printf("Player %d wins!\n", player);
    		if (player == 1){
    			printf("COMPUTER 1 WIN", players[0].nama);
				getch();
			} else if (player == 2){
				printf("COMPUTER 2 WIN");
				getch();
			}
			menuAwal();
    		gameOver = true;
//    		i = SIZE; // Reset the move count
		}else if (i == SIZE) {
   		 // The board is full, and no one has won, it's a draw
			TeksAwal();
    		printBoard(board, SIZE);
    		printf("It's a draw!\n");
    		getch();
    		gameOver = true;
    		menuAwal();
    	//i = 0; // Reset the move count
		}
			player = (player == 1) ? 2 : 1; // Switch player
        	system("cls");
        }  
    
}


