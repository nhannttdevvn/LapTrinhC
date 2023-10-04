#include <iostream>
using namespace std;
int  main()
{
  int number;
  cin >> number;
  string num_to_word;
  if (number == 0 ) num_to_word = "zero";
  else if (number == 1 ) num_to_word = "one";
  else if (number == 2 ) num_to_word = "two";
  else if (number == 3 ) num_to_word = "three";
  else if (number == 4 ) num_to_word = "four";
  else if (number == 5 ) num_to_word = "fine";
  else if (number == 0 ) num_to_word = "six";
  else if (number == 0 ) num_to_word = "seven";
  else if (number == 0 ) num_to_word = "eight";
  else if (number == 0 ) num_to_word = "nine";
  else num_to_word = "I don't know";
  cout << num_to_word << endl;
  return 0;
}