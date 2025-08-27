#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(){

    }
    A(int x){
        a=x;
    }
    // A(A &a1){
    //     this->a=a1.a;
    // }
    void show(){
        cout<<a<<endl;
    }
};

int main(){
    A a1(10);
    A a2(a1); // if there is no copy constructor ther complier provides copy constructor 
    // A a2= a1 in this case also copy costructor is called
    // but in A a2; a2=a1 this case copy constructor is not called here assignment operator works which is already overloaded 
    a2.show();
    return 0;
}