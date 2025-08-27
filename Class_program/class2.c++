#include<iostream>
using namespace std;

// class A{

// };

// int main(){
//     A a1;
//     cout<< sizeof(a1)<<endl; 
//     cout<< sizeof(int)<<endl;


//     cout<< sizeof(long long int)<<endl;
//     cout<< sizeof(float)<<endl;
//      cout<< sizeof(double)<<endl;   
// }
// 1
// 4
// 8
// 4
// 8

class A{
    int a, b;
    public:
    A(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<endl<<b<<endl;
    }
};
A a2(10,20);
int main(){
    A(10,20); /**creates a temporary object of type A.
It’s constructed with a=10, b=20.
But since it is unnamed, it immediately gets destroyed at the end of the statement. */
  a2.show();
}