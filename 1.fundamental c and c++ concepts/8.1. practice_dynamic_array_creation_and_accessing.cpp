/* This program is associated with creation of an array in heap and returning an array which was created in heap to be accessed inside main()*/

#include<iostream>

using namespace std;

// creates an array in heap and returns its pointer to main()
int * fun(int size)
{
  int *p;
  p = new int[size];    // dynamic array creation

  // array initialization
  for(int i=0; i<size; i++)
  p[i] = i+1;

  return p;
}

int main()
{
  int *ptr, size = 5;

  // array is created inside heap and it is created inside function fun()  but even the main() function can access it because main function is getting its pointer
  ptr = fun(size);

  // display array
  for(int i=0;i<size;i++)
  cout << ptr[i] << endl;

  return 0;
}