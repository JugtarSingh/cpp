#include<iostream>
using namespace std;

class A{
    int a,b,c;
    public:
    A(){ }
    A(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }
    void showA(){
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
};

class B : public A{
    int d,e;
    public:
    B() {}
    B(int x ,int y ,int z ,int u,int v):A(x,y,z){
        d=u;
        e=v;
    }
    void showB(){
        showA();
        cout<<d<<endl<<e<<endl;
    }
};

int main(){
    A a1;
    B b1(90,20,30,40,50);
    a1.showA();
    a1=b1;
    a1.showA();
}