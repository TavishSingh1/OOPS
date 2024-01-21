#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpID)
    {
        id = inpID;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class
class Programmer : public Employee
{
public:
    Programmer(int inpID)
    {
        id = inpID;
        int languageCode = 9;
    }
    void getData()
    {
        cout << id << endl
             << languageCode << endl;
    }
};

int main()
{
    Employee tavish(1), harry(2);
    cout << tavish.salary << endl;
    cout << harry.salary << endl;
    Programmer skillF(1);
    skillF.getData();
    cout << skillF.id;
    return 0;
}
/*
1. Default visibility mode is private.
2. Private visibility mode: PUBLIC members of base class become PRIVATE members of derived class.
3. Public visibility mode: PUBLIC members of base class become PUBLIC members of derived class.
4. Private Memebers of the base class can NEVER BE INHERITED.
*/