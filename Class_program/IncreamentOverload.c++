#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(){
        a=0;
    }
    A(int x){
        a=x;
    }
    void show(){
        cout<<a<<endl;
    }
    void operator ++(){  // if there is no parameter therefore it is pre-increment operator;
        ++a;
        cout<<"pre"<<endl;
    }
    void operator ++(int x){  // if there is argument therefore it is post-increment operator;
        a++;
        cout<<"post"<<endl;
    }
};

int main(){
    A a1(10);
    ++a1;
    a1.show();
    a1++;
    a1.show();
}