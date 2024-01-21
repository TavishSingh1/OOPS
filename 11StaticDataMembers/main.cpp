#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter id ";
        cin >> id;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this employee number is " << count << endl;
    }
};

int Employee ::count; // default value is 0
int main()
{
    Employee tavish;
    // tavish.id=1 is not possible as it is private
    tavish.setData();
    tavish.getData();

    Employee rohan;
    rohan.setData();
    rohan.getData();

    Employee rohit;
    rohit.setData();
    rohit.getData();
    return 0;
}