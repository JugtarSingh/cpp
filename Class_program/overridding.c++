#include<iostream>
using namespace std;

class A{
    public :
    virtual void show (){
        cout<<"class A\n";
    }
};
class B :public A{
    public:
    void show(){
        cout<<"class B\n";
    }
};
class C:public B{
    public :
    void show(){
        cout<<"class C\n";
    }
};

int main(){
    B b1;
    A a1;
    C c1;
    A *ptr;
    ptr=&c1;
    ptr->show();
}