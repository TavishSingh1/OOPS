#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you ?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Aap kaise ho ?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello" << endl;
    }
};

class D :public B
{
public:
    void say()
    {
        cout << "Hello Beautiful" << endl;
    }
};

int
main()
{
    // Ambibuity 1
    //  Base1 obj1;
    //  Base2 obj2;
    //  obj1.greet();
    //  obj2.greet();
    //  Derived d;
    //  d.greet();
    B obj;
    D obj2;
    obj2.say();
    return 0;
}