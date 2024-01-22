#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part of number is: " << real << endl;
        cout << "The imaginary part of number is: " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr=&c1;
    Complex *ptr = new Complex;
    // (*ptr).setData(3, 4);
    ptr->setData(3, 4);
    (*ptr).getData();

    // Array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(5, 6);
    ptr1->getData();
    (ptr1 + 1)->setData(7, 8);
    (ptr1 + 1)->getData();
    return 0;
}