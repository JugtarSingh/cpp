#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(){}
    A(int x){
        a=x;
    }
    void show(){
        cout<<a<<endl;
    }
};

int main(){
    A a1;
    int n=100;
    a1=n;
    a1.show();
}