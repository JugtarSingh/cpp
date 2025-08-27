#include<iostream>
using namespace std;

class Overload{
    int a;
    public:
    Overload(){    }
    Overload(int x){
        a=x;
    } 
    friend istream& operator >>(istream& in , Overload &a1);
    friend ostream& operator <<(ostream& out, Overload &a1);
};

istream& operator >>(istream& in , Overload &a1){
    in>>a1.a;
    return in;
}

ostream& operator <<(ostream& out , Overload &a1){
    out<<a1.a;
    return out;
}

int main(){
    Overload a1;
    cout<<"Enter the value: ";
    cin>>a1;
    cout<<"a is :";
    cout<<a1;
}