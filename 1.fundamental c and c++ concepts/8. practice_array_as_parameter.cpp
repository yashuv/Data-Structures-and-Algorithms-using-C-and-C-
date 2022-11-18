#include<iostream>

using namespace std;

// arrays are always passed by address thus the formal parameter must be a pointer
void fun(int A[ ], int n)    // can use *A(general pointer) instead of A[](specific pointer: array pointer) 
{
  /*
  // check these lines inside fun() and main(). Not same because parameter is pointer in the called funcion whereas it is an  array in caller function
  cout << sizeof(A)<< endl;
  cout << sizeof(int)<< endl;
  cout << sizeof(A)/sizeof(int)<< endl; 
  */

  /* we cannot use for each loop on pointer. This gives error! But works with for loop
  for(int a:A)
  cout << a << " ";
  */
 cout << "Array elements from called function before modification:" << endl;
 
 for(int i=0;i<5;i++)
 cout << A[i] << endl;

 cout << "\nAfter modification of argument in called function:" << endl;

 // we can even modify the array because of call by address
 A[0] = 10;
 A[1] = 20;

}

int main()
{
  int A[]={1,3,5,7,9};
  int n=5;

  fun(A, n);

  // we can use for each loop upon an array 
  for(int x:A)
  cout << x << " ";

  return 0;
}