#include <iostream>
using namespace std;

class shop
{
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void dispPrice(void);
};

void shop::setPrice(void)
{
    cout << "Enter ID of your item number " << counter + 1 << endl;
    cin >> item_id[counter];
    cout << "Enter price of your item: " << endl;
    cin >> item_price[counter];
    counter++;
}

void shop::dispPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of item with id " << item_id[i] << " is " << item_price[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.dispPrice();
    return 0;
}