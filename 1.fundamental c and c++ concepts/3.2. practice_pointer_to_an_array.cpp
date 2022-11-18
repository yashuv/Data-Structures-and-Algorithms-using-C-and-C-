#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
  int *p;
	int arr[5] = {2, 3, 5, 7, 9};

	// pointer to an array (no need to give &) or p = &arr[0]
	p = arr;       

	for(int i=0; i<5; i++)
  {
		cout << p[i] << endl;
  }

	return 0;
}
