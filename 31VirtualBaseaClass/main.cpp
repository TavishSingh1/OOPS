#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void setNumber(int a)
    {
        roll_number = a;
    }
    void printNumber()
    {
        cout << "Your roll number is: " << roll_number << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(int m, int p)
    {
        maths = m;
        physics = p;
    }
    void printMarks()
    {
        cout << "Maths marks: " << maths << endl
             << "Physics marks: " << physics << endl;
    }
};

class Sport : virtual public Student
{
protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }
    void printScore()
    {
        cout << "Your PT score is: " << score << endl;
    }
};

class Result : public Test,
               public Sport
{
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        printNumber();
        printMarks();
        printScore();
        cout << "Total score is : " << total << endl;
    }
};

int main()
{
    Result tavish;
    tavish.setMarks(90, 95);
    tavish.setNumber(420);
    tavish.setScore(95);
    tavish.display();
    return 0;
}