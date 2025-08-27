#include<iostream>
using namespace std;

class B;
class A{
    int a;
    public:
    void set(B &obj , int x);
    void show(){
        cout << a<<endl;
    }
    
};

class B{
    int b;
    public:
    void show(){
        cout<< b<<endl;
    }
    friend class A;
};

void A:: set(B &obj,int x){
    obj.b=x;
}

int main(){
    A obj1;
    B obj2;
    obj1.set(obj2, 10);
    obj2.show();
    return 0;
}