#include <iostream>
using namespace std;

class A{
    int a;
    public:
    A(){a=0;}
    A(int x){
        a=x;
    }
    
    void show(){
        cout<<a;
    }
    friend istream& operator >>(istream &in, A &a1);
    friend ostream& operator <<(ostream &out, A &a1);
};

istream& operator >>(istream &in,A &a1){
    in>>a1.a;
    return in;
}

ostream& operator <<(ostream &out, A &a1){
    out<<a1.a;
    return out;
}

int main(){
    A a1;
    cin>>a1;
    cout<<a1;
    a1.show();
}