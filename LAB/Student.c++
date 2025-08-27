#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    int rollno,marks[5];

    public:
    void getData(){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the roll no: ";
        cin>>rollno;
        for(int i=0;i<5;i++)
        {
            cout<<"Enter the marks of subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void calculate(){
        int i,sum=0;
        char grade;
        double percent;
        cout<<"Name is: "<<name<<"\n";
        cout<<"Rollno is: "<<rollno<<"\n";
        cout<<"Marks of 5 subjects are: \n";
        for(i=0;i<5;i++){
            cout<<marks[i]<<" ";
            sum=sum+marks[i];
        }
        percent=sum*100/500.0;
        if(percent>= 90 && percent<=100)
        grade='A';
        else if (percent>=80 && percent<90)
        grade='B';
        else if(percent>=60 && percent<80)
        grade='C';
        else if(percent>=50 && percent<60)
        grade ='D';
        else if(percent>=40 && percent<50)
        grade='E';
        else
        grade='F';
        cout<<"\nPercentage is: " <<percent<<"\n";
        cout<<grade;
    }
};

int main(){
    Student s;
    s.getData();
    s.calculate();
}