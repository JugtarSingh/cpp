#include <iostream>
using namespace std;

class Number{
    int a,b;
    public:
    void set(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<" "<<b;
    }
    Number sum(Number obj1,Number obj2){
        Number obj3;
        obj3.a=obj1.a+obj2.a;
        obj3.b=obj1.b+obj2.b;
        return obj3;
    }
};

int main(){
    Number a1,a2,a3;
    a1.set(10,20);
    a2.set(30,40);
    a3=a1.sum(a1,a2);
    a3.show();
    return 0;
}