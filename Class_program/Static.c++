#include<iostream>
using namespace std;


// class A{
//     int a;
//     public :
//     A(){}
//     A(int x){
//         a=x;
//     }
//     void show(){
//         cout<< a<<endl;
//     }
// };

static class B{
    //  static A a1;
    public: 
    B(){}
    void show(){
        // a1.show();
    }
};

//  A B :: a1(10);


// static A a1(10);
int main(){
    // a1.show();

    B b1;
    b1.show();
}
