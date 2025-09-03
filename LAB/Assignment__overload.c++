#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(){}
    A(int x){
        a=x;
    }
    A operator =(A a1){
        a=a1.a;
        return (*this);
    }
    bool operator > (A a1){
        if(a > a1.a)
        return true;
        else
        return false;
    }
    bool operator < (A a1){
        if(a < a1.a)
        return true;
        else
        return false;
    }
    void show(){
        cout<<"a: "<<a<<endl;
    }
};

int main(){
    A a1(10),a2(20),a3;
    cout<<"Assignment"<<endl;
    a3=a1;
    a3.show();
    if(a1 > a2)
    cout<<"a1 is greater than a2"<<endl;
    else
    cout<<"a2 is greater than a1"<<endl;
    if(a2 < a3)
    cout<< "a2 is lesser than a3"<<endl;
    else
    cout<<"a3 is lesser than a2"<<endl;
    return 0;
}