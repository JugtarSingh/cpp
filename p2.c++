#include<iostream>
using namespace std;

class p2{
    int a=10;
    public:
    void display();
};
void p2::display(){       // function defination is outside the class 
    cout<< a;
}
int main(){
    p2 obj;
    obj.display();
}