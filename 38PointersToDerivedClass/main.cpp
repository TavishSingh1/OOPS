#include <iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying var of base class: "<<var_base<<endl;
        }
};

class DerivedClass: public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying var of base class: "<<var_base<<endl;
            cout<<"Displaying var of derived class: "<<var_derived<<endl;
        }
};

int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;

    base_class_pointer->var_base=34;
    // base_class_pointer->var_derived=134; Base class pointer is binded to members of base class

    base_class_pointer->display(); //this is called late binding
    //Base class pointer is binded to members of base class and hence display fumction of base class is called.
    return 0;
}