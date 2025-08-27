// Swappig the private data of classes using friend function
#include <iostream>
using namespace std;

class B;
class A{
    int a;
    public:
    A(int x){
        a=x;
    }
    void show(){
        cout<<a<<endl;
    }
    void swap(A &obj1,B &obj2);
};
class B{
    int b;
    public:
    B(int x){
        b=x;
    }
    void show(){
        cout<<b<<endl;
    }
    friend void A :: swap(A &obj1,B &obj2);
};

void A:: swap(A &obj1,B &obj2){
    obj1.a=obj1.a+obj2.b;
    obj2.b=obj1.a-obj2.b;
    obj1.a=obj1.a-obj2.b;
}

int main(){
    A obj1(100); 
    B obj2(200);
    cout<<"Intial values: "<<endl;
    obj1.show();
    obj2.show();
    cout<<"After swapping: "<<endl;
    obj1.swap(obj1,obj2);
    obj1.show();
    obj2.show();
    return 0;
}