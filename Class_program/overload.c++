#include <iostream>
using namespace std;

class A{
    int a;
    public: 
    A(){}
    A(int x){
        a=x;
    }
    bool operator >(A a1){
        if(a>a1.a)
        return true;
        else 
        return false;
    }
    bool operator < (A a1){
        if(a<a1.a)
        return true ;
        else
        return false;
    }
    void operator = (A a1){
        a=a1.a;
    }
    void show(){
        cout<<"a: "<<a;
    }
};

int main(){
    A a1(10),a2(20) ,a3 ;
    if(a1>a2)
     cout<<"a1 greater than a2"<<endl;
     else
     cout<<"a2 greater than a1"<<endl;

    if(a1<a2)
    cout<<"a1 is lesser than a2"<<endl;
    else
    cout<<"a2 is lesser than a1"<<endl;

    a3=a2;
    a3.show();


}