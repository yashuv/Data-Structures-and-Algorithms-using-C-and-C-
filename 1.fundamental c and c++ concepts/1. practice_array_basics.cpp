#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
  int arr[10] = {5, 7, 13, 18, 23};  // here only 5 elements are initialized so remaining elements will be zero
  
  cout << sizeof(arr) << endl;      // gives array size
  cout << arr[1] << endl;
  printf("%d\n", arr[2]);

  // for loop to scan all elements
  for(int i=0; i<10; i++)
  {
    cout << arr[i] << endl;
  }
   
   cout << "------" << endl;

  // for each loop in c++ to access all elements in c++
  for(int x:arr)
  {
    cout << x << endl;
  }
  return 0;
}