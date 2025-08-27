#include<iostream>
#include<string.h>
using namespace std;

class Concatenation{
    char *str;
    int len;
    public:
    Concatenation(){
        str=new char[1];
        str[0]='\0';
        len=0;
    }
    Concatenation(char *s){
        len=strlen(s);
        str=new char[len+1];
        strcpy(str,s);
    }
    Concatenation operator +(Concatenation &s1){
        Concatenation s2;
        s2.len=len+s1.len+1;
        s2.str=new char[s2.len+1];
        strcpy(s2.str,str);
        strcat(s2.str," ");
        strcat(s2.str,s1.str);
        return s2;
    }
    void show(){
        cout<<"String is: "<<str<<endl;
        cout<<"Length: "<<len<<endl;
    }
};

int main(){
    char str1[100],str2[100];
    cout<<"Enter string 1: ";
    cin>>str1;
    cout<<"Enter string 2: ";
    cin>>str2;
    Concatenation s1(str1),s2(str2),s3;
    s3=s1+s2;
    s3.show();
    return 0;
}