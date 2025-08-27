#include <iostream>
using namespace std;

class A{
    int a;
    public: 
    A(int x){
        a=x;
    }
    bool operator >(A a1){
        if(a>a1.a)
        return true;
        else 
        return false;
    }
};

int main(){
    A a1(10),a2(20);
    bool valid;
    if(a1>a2)
     cout<<"a greater";
     else
     cout<<"a2 greater";
   // cout<<valid;
}