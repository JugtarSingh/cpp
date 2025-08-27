#include<iostream>
using namespace std;

class Overloading{
    double V;
    public:
    void volume (double s ){
        V=s*s*s;
    }
    void volume(double l,double b , double h){
        V=l*b*h;
    }
    void volume(double r,double h){
        V=3.14*r*r*h;
    }
    void show(){
        cout<<"Volume : "<<V<<endl;
    }
};

int main(){
    int ch; double side,r,l,b,h;
    Overloading obj;
    cout<<"1-To calculate the volume of cube\n";
    cout<<"2-To calculate the volume of cuboid\n";
    cout<<"3-To calculate the volume of cylinder\n";
    cout<<"Enter your choice: ";
    cin>>ch;
    switch(ch){
        case 1: 
        cout<<"Enter the side of the cube: ";
        cin>>side;
        obj.volume(side);
        obj.show();
        break;
        case 2:
        cout<<"Enter the length,breath and height of the cuboid"<<endl;
        cin>>l>>b>>h;
        obj.volume(l,b,h);
        obj.show();
        break;
        case 3:
        cout<<"Enter the radius and the height of the cylinder"<<endl;
        cin>>r>>h;
        obj.volume(r,h);
        obj.show();
        break;
        default: cout<<"Invalid choice"<<endl;        
    }
    return 0;
}