#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int num1, num2;

public:
    int result1, result2;
    void setNumber(int, int);
    void process();
    void display();
};

void SimpleCalculator::setNumber(int a, int b)
{
    num1 = a;
    num2 = b;
}

void SimpleCalculator::process()
{
    result1 = num1 + num2;
    result2 = num1 - num2;
}

void SimpleCalculator::display()
{
    cout << "Result 1 is: " << result1 << endl
         << "Result 2 is: " << result2 << endl;
}

class CompCalculator
{
    int num3;
    int num4;

public:
    int result3, result4;
    void compSetNumber(int, int);
    void compProcess();
    void compDisplay();
};

void CompCalculator::compSetNumber(int a, int b)
{
    num3 = a;
    num4 = b;
}

void CompCalculator::compProcess()
{
    result3 = sqrt(num3);
    result4 = sqrt(num4);
}

void CompCalculator::compDisplay()
{
    cout << "Result 3 is: " << result3 << endl
         << "Result 4 is: " << result4 << endl;
}

class Hybrid : public SimpleCalculator, public CompCalculator
{
public:
    void hybridSimpDisplay()
    {
        display();
    }
    void hybridCompDisplay()
    {
        compDisplay();
    }
};

int main()
{
    Hybrid h, g;
    h.setNumber(10, 5);
    g.compSetNumber(64, 4);
    h.process();
    g.compProcess();
    h.hybridSimpDisplay();
    g.hybridCompDisplay();
    return 0;
}