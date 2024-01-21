#include <iostream>
using namespace std;
/*
Syntax for initialisation list in constructor
constructor(argument-list):initialisation-section
{
    assignment+other code;
}
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    Test(int i, int j) : a(i), b(j+a)
    // Test(int i, int j) : b(i), a(b+j)    //This is a red flag as 'a' is initialised first
    {
        cout << "Constructor is called" << endl
             << "value of a is: " << a << endl
             << "Value of b is: " << b << endl;
    }
};

int
main()
{
    Test t(1, 2);
    return 0;
}