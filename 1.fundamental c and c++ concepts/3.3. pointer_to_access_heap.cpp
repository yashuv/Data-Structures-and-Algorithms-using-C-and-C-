#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
  int *ptr,*p; 

	// pointer to an array in heap (dynamic allocation of memory)
	ptr = (int *)malloc(5*sizeof(int));  // in C
  p = new int[5];                      // in C++

  ptr[0]=5;  p[0]=10;
  ptr[1]=10; p[1]=20;
  ptr[2]=15; p[2]=30;
  ptr[3]=20; p[3]=40;
  ptr[4]=25; p[4]=50;

	for(int i=0; i<5; i++)
  {
		cout << ptr[i] << "\t" << p[i] << endl;
  }

  // releasing (deallocating) the memory
  free(p);
  delete [ ] ptr;

	return 0;
}
