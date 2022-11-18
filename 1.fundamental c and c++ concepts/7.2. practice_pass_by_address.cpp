#include<iostream>

using namespace std;

// function modifies actual parameters
void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
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

  // parameter passed by address
  swap(&num1, &num2);
  
  cout << "After Swap:\n" << "num1 = " << num1 << " , " << "num2 = " << num2 << endl;

  return 0;
}