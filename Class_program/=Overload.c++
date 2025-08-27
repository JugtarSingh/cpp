#include<iostream>
using namespace std;


class A{
    int a;
    public:
    A(){a=0;}
    A(int x){
        a=x;
    }
    void operator =(A a1){
        a=a1.a;
    }
    void show(){
        cout<< a<<endl;
    }
};

int main(){
    A a1(10),a2;
    a2=a1;
    a2.show();
    return 0;
}