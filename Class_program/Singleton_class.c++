#include<iostream>
using namespace std;


class A{
    int a;
    A(){    }
    A(int x){
        a=x;
    }
    public :
    static A& getObject(int x){
        static A a1(x);
        return a1;  
    }
    void show(){
        cout<<"Value of a : "<<a<<endl;
    }
};

int main(){
    A a1 = A::getObject(10);
    // A a2 = A::getObject(20);
    a1.show();
    // a2.show();
}