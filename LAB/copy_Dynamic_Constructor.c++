#include <iostream>
#include <cstring>
using namespace std;

class A{
    int a;
    char *s;
    public: 
    A(){  }
    A(int x, char *str){  //Dynamic Constructor
        a=x;
        s = new char [strlen(str)+1];
        strcpy(s,str);
    }
    A(A &obj){ // copy constructor
        a=obj.a;
        s = new char[strlen(obj.s)+1];
        strcpy(s,obj.s); 
    }
    void show(){
        cout<<"a : "<<a<<endl;
        cout<<"String: "<<s<<endl;
    }
}; 

int main(){
    A a1(10,"Jugtar") , a2(a1);
    a2.show();
    return 0;
}