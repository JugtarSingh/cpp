#include<iostream>
using namespace std;

class B;
class A{
    int a;
    public:
    A(int x){
        a=x;
    }
        friend void swap(A &a1, B &b1);
        void show(){
            cout<<"Value of a : "<<a<<endl;
        }
};

class B{
    int b;
    public:
    B(int x){
        b=x;
    }
       friend void swap(A &a1, B &b1);
       void show(){
            cout<<"Value of b : "<<b<<endl;
        }
};

void swap(A &a1, B &b1){
    a1.a= a1.a+b1.b;
    b1.b= a1.a-b1.b;
    a1.a= a1.a-b1.b;
}

int main(){
    A a1(10);
    B b1(20);
    cout<<"Values before swapping: "<<endl;
    a1.show();
    b1.show();
    swap(a1,b1);
    cout<<"Values after swapping: "<<endl;
    a1.show();
    b1.show();
}