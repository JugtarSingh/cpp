#include<iostream>
using namespace std;

class A{
    int a;
    public: 
    A(){
        a=0;
    }
    A(int x){
        a=x;
    }
    friend void operator -(A &a1);
    void show(){
        cout<<a<<endl;
    }
};

void operator - (A &a1){
    a1.a=-a1.a;
}

int main(){
    A a1(10);
    -a1;
    a1.show();
    return 0;
}