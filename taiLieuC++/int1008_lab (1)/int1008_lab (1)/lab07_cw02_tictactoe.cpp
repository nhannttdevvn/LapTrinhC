#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

const int SIZE = 10;
const int COL = SIZE;
const int ROW = SIZE;
const char O_PLAYER = 'O';
const char X_PLAYER = 'X';
const char BLANK = '.';

void initBoard(char board[][COL], int ROW);
void printBoard(char board[][COL], int ROW);
bool play(char board[][COL], int _row, int _col, char player);

int main()
{
    char board[ROW][COL];
    initBoard(board, ROW);
    printBoard(board, ROW);

    int _row, _col;
    char player = O_PLAYER;
    int turn = 0;

    do
    {
        turn++;

        cout << turn;
    } while (true);

    return 0;
}

void initBoard(char board[][COL], int ROW)
{
    return ;
}

void printBoard(char board[][COL], int ROW)
{
    return ;
}

bool play(char board[][COL], int _row, int _col, char player)
{
    return true;
}
