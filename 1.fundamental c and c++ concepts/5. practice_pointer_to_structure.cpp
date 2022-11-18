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
   Car c={2012, 56};

  // variable accessing using dot operator
   cout << c.year << endl;
   cout << c.mileage << endl;

  // pointer to a structure
  Car *ptr=&c;

  // pointer accessing using arrow operator  
  ptr->year=2015;
  ptr->mileage=55;

  cout << ptr->year << endl;
  cout << ptr->mileage << endl;

	return 0;
}
