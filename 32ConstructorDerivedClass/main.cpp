#include <iostream>
using namespace std;

/*
case 1:
class B:public A{
    //order of execution of constructor is: First A() then B()
};

case 2:
class A:public B, public C{
    //order of execution of constructor is: First B() then C() and at last A()
};

case 3:
class A:public B, virtual public C{
    //order of execution of constructor is: First C() then B() and at last A()
};
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base class(1) constructor is called" << endl;
    }
    void printDataBase1()
    {
        cout << "The value of data is: " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base class(2) constructor is called" << endl;
    }
    void printDataBase2()
    {
        cout << "The value of data is: " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor is called" << endl;
    }
    void printData()
    {
        cout << "The value of derived 1 is: " << derived1 << endl;
        cout << "The value of derived 2 is: " << derived2 << endl;
    }
};

int main()
{
    Derived der(1,2,3,4);
    der.printData();
    der.printDataBase1();
    der.printDataBase2();
    return 0;
}