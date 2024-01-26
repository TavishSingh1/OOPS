#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // A & setData(int a)
    void  setData(int a)
    {
        this-> a = a;
    //  return *this; 
    }
    void getData()
    {
        cout << "The value of input is: " << a << endl;
    }
};

int
main()
{
    A a;
    a.setData(1);
    a.getData();
    return 0;
}
//this is a keyword which is a pointer which points to the objects which invokes the member function