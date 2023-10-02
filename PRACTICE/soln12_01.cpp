// Exercise 12-1
// Implementing the * operator for the Box class
// to post-multiply by an integer
#include <iostream>
#include "Box.h"
using namespace std;
int main()
{
  Box box {2, 3, 4};
  cout << "Box is " << box << endl;
  unsigned n {3};
  Box newBox = box * n;
  cout << "After multiplying by " << n << " box is " << newBox << endl;
}