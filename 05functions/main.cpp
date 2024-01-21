#include <iostream>
using namespace std;

int add1(int a,int b){
    int c = a+b;
    return c;
}

int main(){
    int a,b;
    cin>> a;
    cin>> b ;
    cout << add1(a,b);
    return 0;

}

