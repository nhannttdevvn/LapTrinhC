#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

const int SIZE = 6;
const int COL = SIZE;
const int ROW = SIZE;
const char O_PLAYER = 'O';
const char X_PLAYER = 'X';
const char BLANK = '.';
const int WINNER = 3;

const char TEST_BOARD [][6] =
    { { 'o','x','o','x','x','o' } ,
      { 'o','x','x','x','o','x' } ,
      { 'x','o','x','o','o','o' } ,
      { 'o','o','x','x','o','x' } ,
      { 'o','x','o','x','x','o' } ,
      { 'o','x','o','x','x','o' }
    };

void initBoard(char board[][COL], int ROW);
void printBoard(const char board[][COL], int ROW);
bool play(char board[][COL], int _row, int _col, char player);

int main()
{
    printBoard(TEST_BOARD, 6);
    char board[ROW][COL];
    initBoard(board, ROW);
    printBoard(board, ROW);

    int _row, _col;
    char player = O_PLAYER;
    int turn = 0;

//    do
//    {
//        turn++;
//        _row = rand() % ROW;
//        _col = rand() % COL;
//        play(board, _row, _col, player);
//        system("CLS");
//        printBoard(board, ROW);
//        cout << turn;
//    } while (true);

    return 0;
}

void initBoard(char board[][COL], int ROW)
{
    for (int _row = 0; _row < ROW; _row++)
        for (int _col = 0; _col < COL; _col++)
            board[_row][_col] = BLANK;
}

void printBoard(const char board[][COL], int ROW)
{
    for (int _row = 0; _row < ROW; _row++)
    {
        for (int _col = 0; _col < COL; _col++)
            cout << board[_row][_col];
            //cout << ' ' << board[_row][_col];
        cout << endl;
    }
}

bool play(char board[][COL], int _row, int _col, char player)
{
    board[_row][_col] = player;
    return true;
}
