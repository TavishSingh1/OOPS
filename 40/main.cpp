#include <iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        char tittle[30];
        float rating;
    public:
        CWH(char *s, float r){
            strcpy(tittle,s);
            rating r;
        }
};

int main(){
    
    return 0;
}