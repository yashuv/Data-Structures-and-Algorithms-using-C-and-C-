#include<iostream>

using namespace std;

int main()
{
  int x = 10;
  int &y = x;     // initialization must be done at  reference declaration

  cout << "x = " << x << ", y = " << y << endl;

  y = 20;

  cout << "x = " << x << ", y = " << y << endl;

  int z = 30;
  y = z;        // assignment but not initialization

  cout << "x = " << x << ", y = " << y << endl;


  return 0;
}