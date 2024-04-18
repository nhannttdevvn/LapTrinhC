#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;

const int BLUE          = 0;
const int GREEN         = 1;
const int RED           = 2;
const int YELLOW        = 3;
const string COLOUR[4]  = { "B", "G", "R", "Y" };
const string NUMBER[10] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

const int NO_OF_CARDS   = 76;

string getCard(int key)
{
    string s = "";
    switch (key)
    {
        case 0:
        case 1:
        case 2:
        case 3: s += NUMBER[0] + COLOUR[key]; break;
        /// hãy sửa công thức cho trường hợp default
        default: s += NUMBER[(key-4) % 36 % 9 + 1] + COLOUR[(key-4) % 36 / 9]; break;
    }
    return s;
}

int main()
{
    for (int key = 0; key < NO_OF_CARDS; key++)
        cout << getCard(key) << " ";
    return 0;
}
