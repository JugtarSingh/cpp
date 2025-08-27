#include<iostream>
using namespace std;

class complex{
    int real,Imag;
    public:
    complex(){}
    complex(int x,int y){
        real=x;
        Imag=y;
    }
    void show(){
        cout<<real<<"+j"<<Imag<<endl;
    }
    friend complex add(complex c1,complex c2);
};

complex add(complex c1,complex c2){
    complex c3;
    c3.real=c1.real+c2.real;
    c3.Imag = c1.Imag+c2.Imag;
    return c3;
}

int main(){
    complex c1(10,20),c2(30,40),c3;
    c3=add(c1,c2);
    c3.show();
}