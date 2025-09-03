#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(){}
    A(int x){
        a=x;
    }
    void operator ++(){
        ++a;
    }
    void operator ++(int x){
        a++;
    }
    A operator +(A a1){
        A a2;
        a2.a=a+a1.a;
        return a2;
    }
    void show(){
        cout<<a<<endl;
    }
};

int main(){
    A a1(10),a2(20),a3;
    cout<<"Pre-increment"<<endl;
    ++a1;
    a1.show();
    cout<<"Post-increment"<<endl;
    a2++;
    a2.show();
    cout<<"Addition"<<endl;
    a3=a1+a2;
    a3.show();
}