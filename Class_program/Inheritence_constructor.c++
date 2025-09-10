#include<iostream>
using namespace std;

class A{
    int a;
    public :
    A(int x){
        a=x;
    }
    void showA(){
        cout<<a;
    }
};

class B:public A{
    int b;
    public :
    B(int x ,int y ):A(x){
        b=x;
    }
    void showB(){
        cout<<b;
    }
};

class C:public B{
    int c;
    public :
    C(int x ,int y, int z ):B(x ,y){
        c=z;
    }
    void showC(){
        cout<<c;
    }
};

int main(){
    C c1(10,20,30);
    c1.showC();
}