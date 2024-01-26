#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    virtual void display()
    {
        cout << "Displaying var of base class: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying var of base class: " << var_base << endl;
        cout << "Displaying var of derived class: " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;

    base_class_pointer->var_base = 34;

    base_class_pointer->display();
    return 0;
}