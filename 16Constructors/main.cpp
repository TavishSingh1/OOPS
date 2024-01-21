#include <iostream>
using namespace std;

class Complex
{ // creating a constructor
    int a, b;

    // A constructor has the same name as the class name and gets automatically invoked as soon as the object for that class is created
public:
    Complex(void);
    void printNumber()
    {
        cout << "Your Complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(void)
{
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}

/*
Properties of constructors:
1. Constructors which do not have parameter are called default parameters.
2. It gets automatically invoked as soon as the object for that class is created.
3. Has the same name as the class name.
4. Should be declared in the public section of the class.
5. They cannot return values and do not have a return type.
6. We cannot refer to their address.
*/