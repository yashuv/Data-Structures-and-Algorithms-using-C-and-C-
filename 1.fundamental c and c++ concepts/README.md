Before moving forward with data structures and algorithm implementation, it is more important to know the fundamental concepts used in the programming language that is being used. I tried to provide some essential C and C++ concepts.
## 1. Array Basics
Array is defined as a collection of similar data elements. If you have some set of integers or set of floats, you can group them under one name as an array.<br>

### Method of declaring an array <br>
If you want an integer type array then declare it as under:<br>
<code>int arr[5]; </code><br>
From this you get *5 integers*, array name is *arr*, and all those integers you can access them with name *arr*.
You can declare along with an initialization of array as under:<br>
<code>int Arr[5] = {3, 7, 15, 23, 39} </code><br>
Now you can access the elements of array *Arr* as under:
<pre>
Arr[0]= 3
Arr[1]= 7
Arr[2]= 15 
Arr[3]= 23
Arr[4]= 39            
</pre>  
Now you can print elements using *for loop* to access through list of elements of array as under:
<pre>
for(int i=0; i<5; i++)
{
  print("%d", Arr[i]);   // c way (either)
  cout << Arr[i];       // c++ way (or)
}
</pre>
Hence, you should also be familiar to the *types of loop* as well. <br>
<a href="#">A Practice Array Program</a>

## 2. Structure
Structure can be defined as a collection of related data members under one name. Those data members may be of similar or dissimilar type.<br>
Usually, a *Structure* is a user defined data type that can be used to group elements of different types into a single type. Apart from the primitive data types that we have in any programming language, like in C language we have primitive data types like integer, float, double and so on, using these primitives we can define our own data type under one name depending on our requirement. Thanks to the structure!
<br>


### Structure Usage
There are a number of ways to use structures in C. One common way is to use them to group related data together. For example, you might use a structure to store information about a student, including their name, age, and grade level.
<br>
Another way to use structures is to define new types. For example, you could use a structure to represent a *complex number*, with fields for the real and imaginary parts. You could then use this new type to declare variables and perform operations on them.
<br>
Finally, structures can be used to implement abstract data types. For example, you could use a structure to represent a stack, with fields for the current size and capacity, and an array to store the actual data.<br>
Let us take an example to store *car* info. A car has properties *name*, *year* and *model* that together define a car.
So in your program if you need something like a car then you can define a structure for it because a car is not defined by just one value, but by a set of values. For this you can group the values together under one name and define it as a structure as shown below:
<pre>
struct car
{
    char name[20];
    char model[20];
    int year;
}
</pre>
Here, you can define the member type as per your requirement. 
To put the above structure into effect, *declare* a variable of type structure inside *main()* function as under:
<pre>
int main()
{
    struct car c;   // c is the structure type variable
}
</pre>
Here, a structure variable 'c' will occupy memory space for a structure data object. 

Declaration + Initialization together of structure can be done as under:<br>
<code> struct car c = {"Infiniti", "Q50", 2013}; </code> <br>

Now, for accessing the member of structure we use dot(.) operator as:
<pre>
c.year          // accesses the member year which gives 2013
c.year = 2015   // changes the year to 2015 in memory
</pre>
<a href="#">A Practice Structure Program</a>

## 3. Pointers <br>
⇨ A pointer is a variable that stores the address of another variable. It commonly used to store the address of an array or struct variable.<br>
⇨ Pointers are often used to store the address of a memory location, but they can also store other kinds of values, such as the address of a function.<br>
⇨ In C, a pointer is used to access memory in a heap (dynamic allocation of memory) using a special function called *malloc()*.<br>
*Syntax of malloc function in C is as follows:*<br>
<pre>ptr=(cast-type*)malloc(n * sizeof(cast_type))<br>
eg: ptr = (int*)malloc(5*sizeof(int))       // allocates 5 *4 bytes=20 bytes memory dynamically </pre>

- The malloc function takes a single argument, which is the size of the memory block to be allocated in bytes. The function returns a pointer to the beginning of the allocated memory block. If the memory could not be allocated, the malloc function returns a *NULL pointer*.<br>
- Same thing can be done in C++ using operator called *new* as shown below.<br>
<code>ptr = new int[5]; </code>

⇨ Pointers are used to access resources that are outside the program. For example, when accessing a file on a hard disk, a program cannot directly access the hard disk file because it is external to the program. For that, it needs a pointer for accessing a file, and that pointer should be a file type. Hence, we can access a file outside the program. <br>
Think of a program that may be accessing a keyboard, or a monitor, or a network connection that is external to the program.Thanks to the pointer!
<br>
*Declaring and Initializing a pointer:*<br>
<pre>
int a = 5;    // 'a' is a data variable
int *ptr;     // ptr is a pointer (address variable) to an integer
p = &a;	     // ptr is initialized to the address of 'a'
printf("%d", *ptr);  	// dereferencing a pointer
</pre>
<img src="images/pointer example figure.jpg" height="195px" width="250px"><br>
<a href="">A Practice Pointer Program</a>

## 4. Reference in C++ 
The reference feature is available only in C++. This is not part of the C programming language. A reference is an alias, or alternative name, for an already existing variable. <br>
The syntax of a reference in C++ is to place an ampersand (&) in front of the name of the variable that is being referenced.<br>
It plays vital role in parameter passing.<br>
<pre>
int x = 5;       // actual variable
int &y = x;     // y is an alias of x
</pre> 
<a href= "">A Practice Reference Program</a>
<br>

## 5. Pointer to Structure <br>
A pointer to a structure in C programming is a pointer that stores the address of a structure variable. A pointer to a structure variable can be declared by using the unary operator & (ampersand) with the structure variable.<br>
<pre>
struct Car c;             // structure declaration
struct Car *ptr =  &c;    // pointer to a structure
</pre>
To access a member of a structure using a pointer to the structure, you must use the ->(arrow) operator.<br>
For example, if you have a pointer to a structure named *ptr*, and the structure has a member named *model*, you would access the member using the following syntax: <br>
&nbsp;<code>ptr->model </code> <br>
Similarly, you can create an object dynamically in heap using pointer. The object or variable of structure type can be dynamically created using pointern as follow:<br>
<pre>
struct Car *ptr;    // structure type pointer
ptr = (struct Car *)malloc(sizeof(struct Car));   // pointer to dynamic object
ptr->model   // accessing member of structure using pointer
</pre>
<a href= "">A Practice Pointer to Structure Program</a>

## 6. Functions <br>
A function is a set of instructions that perform a specific task. It is a code block that is executed when it is called/invoked. It can take one or more parameters and may return one or more values. A function can be called from anywhere within a program.<br>
Functions are often written in order to save time and space, and to make code more readable.<br>
Syntax  of a function:<br>
<pre>
ReturnType FunctionName(FunctionParameter) {
  // local variable declaration
  // statements
  // ReturnStatement
}
</pre>
<a href= "">A Practice Function Program</a><br>

## 7. Parameter Passing Methods <br>
Parameter passing is a way of providing data to a method or function. The parameters are the variables that receive the data. The data is provided as a parameter and is passed to the method or function.<br>
There are three parameter passing methods. They are:<br>
### I. Pass By Value <br>
In this method of parameter passing, the value of the actual parameter is copied into the formal parameter. The changes made to the formal parameter will not be reflected in the actual parameter, because the actual parameter is not the same as the formal parameter. This is the most common method of passing parameters to a function.<br>
<u>When to use the pass by value method:</u><br>
<li>when it is not needed to modify the actual parameters. i.e., when the value of the parameter is not changed by the function.</li>
<li>if the function returns some results.</li>
<a href="">A Practice Example of Pass/Call By Value</a><br>

### II. Pass By Address <br>
In this method of parameter passing, the address of the actual parameter is passed to the formal parameter and formal parameter must be the pointer. This allows the function to directly modify or access the actual parameters. <br>
Pass by address is generally used when the called function needs to modify the value of the argument, or when the argument is an object that is too large to be passed by value. <br>
<a href="">A Practice Example of Pass/Call By Address</a><br>

### III. Pass By Reference <br>
In this method of parameter passing, the function receives an alias to the argument passed in. The called function receives an implicit reference to the argument. This means that the called function can modify the original argument, which will be reflected in the calling environment.<br>
Pass by reference is often used when we want to modify an argument in a function. For example, if we have a function that takes an array and sorts it, we can pass the array by reference so that the function can modify the original array.<br>
<a href="">A Practice Program of Pass/Call By Rererence</a>

C supports only pass by value and pass by address methods, but C++ supports all three of the above methods.<br>

## 8. Array as Parameter <br>
An array is a data structure that stores a collection of elements of the same type. When an array is passed as a parameter to a function, the function can access and modify the elements of the array using their indices. It is because an array is always passed by address.

<a href="">Program: Array as a Parameter to function</a><br>
<a href="">Program: Creation of Array in Heap and Accessing it inside main</a>

## 9. Structures as Parameter <br>
## 10. Monolithic Program <br>
## 11. Modular Program <br>
## 12. Structure and Functions <br>
## 13. Object-Oriented Program(OOP) <br>
## 14. C++ Class and Constructor <br>
## 15. Template Classes <br>
