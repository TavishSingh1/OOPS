#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printNumber()
    {
        cout << "Your Complex number is " << a << " + " << b << "i" << endl;
    }
};
Complex::Complex(int x, int y)          //Parameterized constructor
{
    a = x;
    b = y;
}

int main()
{
    Complex c(4, 6);            // Implicit call
    Complex d = Complex(7, 8);

    c.printNumber();
    d.printNumber();
    return 0;
}