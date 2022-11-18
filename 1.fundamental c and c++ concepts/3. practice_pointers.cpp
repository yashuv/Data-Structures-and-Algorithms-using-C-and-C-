#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int a = 5;
	int arr[5] = {2, 3, 5, 7, 9};
	int *ptr,*p;
	ptr = &a;     // pointer to an integer
	
	cout << a << endl;
	printf("Using pointer a = %d\n",*ptr);    // dereferencing a pointer 
	cout << (&a == ptr) << endl;
	cout << (a == *ptr) << endl;

	// pointer to an array (no need to give &) or p = &arr[0]
	p = arr;       

	for(int i=0; i<5; i++)
		cout << p[i] << endl;

	return 0;
}
