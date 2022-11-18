#include<iostream>

using namespace std;

// function returns sum and does no modify of actual arguments
int add(int x, int y)
{
  int z;
  z = x + y;
  return z;
}

int main()
{
  int num1,num2,sum;

  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;
  
  // parameter passed by value
  sum = add(num1, num2);
  
  cout << "Sum = " << sum;

  return 0;
}