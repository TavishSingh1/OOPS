#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNumber;

public:
    void setRollNumber(int);
    void getRollNumber(void);
};

void Student::setRollNumber(int r)
{
    rollNumber = r;
}

void Student::getRollNumber()
{
    cout << "The roll number is: " << rollNumber << endl;
}

class Exam : public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};

void Exam::setMarks(float m, float p)
{
    maths = m;
    physics = p;
}

void Exam::getMarks()
{
    cout << "Physics Marks: " << physics << endl
         << "Maths Marks : " << maths << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void displayResult()
    {
        getMarks();
        getRollNumber();
        cout << "Your percentage is: " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    Result tavish;
    tavish.setRollNumber(420);
    tavish.setMarks(99, 100);
    tavish.displayResult();
    return 0;
}
/*
If we are inheriting A from B and B from C :
1. A is the base class of B and B is the base class of C.
2. ABC is called inheritance path.
*/