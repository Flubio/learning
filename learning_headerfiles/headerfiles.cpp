#include <iostream>
#include "headerfiles.h"
using namespace std;

int main()
{
  int input;
  cout << "Number that should be added to 555:" << endl;
  cin >> input;
  cout << add(input, 555) << endl;
  return 0;
}

int add(int x, int y)
{
  return x + y;
}