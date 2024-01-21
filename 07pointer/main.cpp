#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is: " << *(ptr) << endl;

    // new operator
    int *ptr1 = new int(30);
    cout << "The value at address ptr1 is: " << *(ptr1) << endl;

    // delete operator
    delete ptr1,ptr;
    cout << "The value at address ptr1 is " << *(ptr1) << " and at ptr is" << ptr << endl;
    cout<<"";
    return 0;
}