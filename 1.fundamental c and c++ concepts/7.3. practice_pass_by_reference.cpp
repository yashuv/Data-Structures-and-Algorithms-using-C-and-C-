#include<iostream>

using namespace std;

// function receives an alias to the argument passed in
// function can modify the original argument
void swap(int &x, int *y)
{
  int temp;
  temp = x;
  x = *y;
  *y = temp;
}

int main()
{
  int num1,num2,sum;

  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;
  
  cout << "Before Swap:\n" << "num1 = " << num1 << " , " << "num2 = " << num2 << endl;

  // parameter passed by reference
  swap(num1, &num2);
  
  cout << "After Swap:\n" << "num1 = " << num1 << " , " << "num2 = " << num2 << endl;

  return 0;
}

/*
// both pass by reference and pass by address parameter passing
void swap(int &x, int *y)
{
  int temp;
  temp = x;
  x = *y;
  *y = temp;
}

swap(num1, &num2);
*/