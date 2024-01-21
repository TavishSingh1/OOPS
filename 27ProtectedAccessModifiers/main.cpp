#include <iostream>
using namespace std;

/*
                        Public          Private             Protected
1. Private Members      NOT INHERITED   NOT INHERITED       NOT INHERITED
2. Protected Members    PROTECTED       PRIVATE             PROTECTED
3. Public Members       PUBLIC          PRIVATE             PROTECTED
*/

class Base{
    protected:
    int a, b;
};

class Derived : protected Base{
    
};

int main(){
    Base b;
    Derived d;
    // cout<<d.a;
    return 0;
}