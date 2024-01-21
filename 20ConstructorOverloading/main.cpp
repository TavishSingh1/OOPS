#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    Complex(int);
    Complex();
    void printNumber()
    {
        cout << "Your Complex number is " << a << " + " << b << "i" << endl;
    }
};

// Constructor overloading
Complex::Complex(int x, int y) // Parameterized constructor
{
    a = x;
    b = y;
}

Complex::Complex(int x) // Parameterized constructor
{
    a = x;
    b = 0;
}

Complex::Complex() // Default constructor
{
    a = 0;
    b = 0;
}

int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}