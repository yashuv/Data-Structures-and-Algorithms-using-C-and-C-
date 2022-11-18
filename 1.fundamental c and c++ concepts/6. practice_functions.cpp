#include<iostream>

using namespace std;

// function definition
int add(int a, int b)
{
  int c;
  c = a + b;

  return c;
}

int main()
{
  int x,y,sum;
  x=10;
  y=20;
  sum = add(x,y);                // function calling
  
  cout << "Sum = " << sum << endl;

	return 0;
}
