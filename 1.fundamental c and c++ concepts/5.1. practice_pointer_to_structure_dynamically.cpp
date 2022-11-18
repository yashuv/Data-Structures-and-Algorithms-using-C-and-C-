#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Car
{
  int year;
  int mileage;
};

int main()
{
   struct Car *ptr;
   ptr = (struct Car *)malloc(sizeof(struct Car));  // C code
   
  //  ptr = new Car;    // C++ code

   ptr->year=2010;
   ptr->mileage=48;

  cout << ptr->year << endl;
  cout << ptr->mileage << endl;

	return 0;
}
