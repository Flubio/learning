#include "square.h"   // square.h is also included once here
#include "geometry.h" // square.h import from here is being ignored
#include <iostream>
using namespace std;

int main()
{
  cout << "a square has " << getSquareSides() << " sides\n";
  cout << "a square of length 5 has a perimeter length " << getSquarePerimeter(5) << endl;
  return 0;
}