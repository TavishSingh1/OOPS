#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend Complex sumComplex(Complex o1, Complex o2);  //gives permission to access the private members

    void printNumber()
    {
        cout << "Your Complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;

    c1.setNumber(1, 2);
    c1.printNumber();

    c2.setNumber(3, 4);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}

/*
Properties of friend function:
1. Not in the scope of class.
2. Since it is not in the class, it cannot be called by an object of the class.
3. Can be invoked without the help of any object.
4. Usualy contains ojects as arguments.
5. Can be declared in public or private part of the class.
6. It cannot access the members directly by their name and need object_name.member_name to access any member.
*/