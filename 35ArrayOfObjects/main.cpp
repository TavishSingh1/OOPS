#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Code of this item is: " << id << endl
             << "Price of this item is: " << price << endl;
    }
};

int main()
{
    int size = 2;
    Shop *ptr = new Shop[size];
    Shop *temptr = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter ID and price of item: " << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        temptr->getData();
    }
    

    return 0;
}