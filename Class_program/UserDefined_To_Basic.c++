#include<iostream>
using namespace std;

/**Here we are converting Userdefined datatype to inbuild data type using Type conversion function */

class A{
    int a;
    public:
    A(int x){
        a=x;
    }
    operator int (){
        return a;
    }
};

int main(){
    A a1(20);
    int x =a1;
    cout << x;
}