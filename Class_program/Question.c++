#include<iostream>
using namespace std;

// class A{
//     int a;
//     public:
//     A(){}
//     A(int x){
//         a=x;
//     }
//     void show(){
//         cout<<"Class A"<<endl;
//     }
// };

// class B:public A{
//     int b;
//     public :
//     B(){}
//     B(int x){
//         b=x;
//     }
//     virtual void show(){
//         cout<<"Class B"<<endl;
//     }
// };

// int main(){
//     A *ptr;
//     A a1;
//     B b1;
//     ptr = &a1;
//     ptr->show();
// }


// function call in arguments
class A{
    int a;
    public:
    A(int x){
        a=x;
    }
    int geta(){
        return a;
    }
    void sum(int n , int x = geta()){
        int sum = n;
    }
};

int main(){
    A a1(10);
    a1.sum(10);
}