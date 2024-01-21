#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chck_bin(void);
    void disp_bin(void);
};

void binary::read(void)
{
    cout << "Enter a number" << endl;
    cin >> s;
}

void binary::chck_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary format" << endl;
            exit(0);
        }
    }
}

void binary::disp_bin(void)
{
    cout << "Your entered binary number is: " << s;
}
int main()
{
    binary b;
    b.read();
    b.chck_bin();
    b.disp_bin();
    return 0;
}