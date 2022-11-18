#include<iostream>

using namespace std;

struct triangle
{
    int length;
    int breadth;
    int height;
};

int main()
{
    struct triangle t1={4,3,5};
    
    cout << sizeof(t1) << endl;   // size of structure
    printf("%lu\n", sizeof(t1));  // c way
    
    cout << "Initially:\nlength = " << t1.length << "\nbreadth = " << t1.breadth << "\nheight = "<< t1.height << endl;
    
    t1.length = 7;
    t1.breadth = 4;
    t1.height = 8;
    
    cout << "\nAfter modification:\nlength = " << t1.length << "\nbreadth = " << t1.breadth << "\nheight = "<< t1.height << endl;
    return 0;
}
