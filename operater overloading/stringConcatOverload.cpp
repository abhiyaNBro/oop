#include<iostream>
#include<string.h>
using namespace std;

class Concat{
    private:    
    char str[30];

    public:
    void getStr(){
        cout<<"Enter any word: "<<endl;
        cin>>str;

    }

    Concat operator +(Concat & other){
        Concat temp;
        strcpy(temp.str,str);
        strcat(temp.str,other.str);
        return temp;
    }

    void show(){
        cout<<"The string is :"<<str<<endl;

    }
};

int main(){
    Concat s1, s2, s3;
    s1.getStr();
    s2.getStr();
    s3=s1+s2;

    cout<<"After concatenation :"<<endl;

    s3.show();

    return 0;
}