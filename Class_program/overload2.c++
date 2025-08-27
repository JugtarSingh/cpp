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
    A operator -(){
        a=-a;
        return (*this);
    }
    void show(){
        cout<<a<<endl;
    }
};

int main(){
    A a1(10),a2;
    // -a1;   // a2= -a1 will give error
    a2=-a1;
    a2.show();
    return 0;
}