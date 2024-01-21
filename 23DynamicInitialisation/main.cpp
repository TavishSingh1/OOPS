#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float rate;
    float interestRate;
    float returnValue;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;

    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    returnValue = principal;
    interestRate = float(r)/100;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit::show()
{
    cout << endl
         << "The principal amount was: " << principal << endl
         << "The return value after " << years << " years is: " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y and r: " << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    bd2.show();

    bd3.show();
    return 0;
}