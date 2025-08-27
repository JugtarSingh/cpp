#include<iostream>
using namespace std;

/** Case 3 User defined to another user defined using type conversion function */
class A{
    int a,b;
    public:
    A(){}
    int& geta(){
        return a;
    }
    int& getb(){
        return b;
    }
    void show(){
        cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
    }
};

class B{
    int x,y;
    public:
    B(){
        x=10;
        y=20;
    }
    operator A(){
        A temp;
        temp.geta()=x;
        temp.getb()=y;
        return temp;
    }
};

int main(){
    B b1;
    A a1;
    a1=b1;
    a1.show();
}