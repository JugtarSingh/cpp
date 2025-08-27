#include<iostream>
using namespace std;

class A{
    int a;
    static int x;
    public:
    A(){
        ++x;
        cout<<"Object "<<x<<" created"<<endl;
    }
    A(int n){
        a=n;
        ++x;
        cout<<"Object "<<x<<" created"<<endl;
    }
    void show(){
        cout<<"No of object created: "<<x<<endl;
    }
    ~A(){
        cout<<"Object "<<x<<" destroyed"<<endl;
        --x;
    }

};

int A :: x;

int main(){
    A a1,a2(10);
    a1.show();
}