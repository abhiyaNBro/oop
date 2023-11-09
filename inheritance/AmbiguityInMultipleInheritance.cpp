#include<iostream>
using namespace std;

class Base1{
    protected:
    int x;
    public:
    void input(){
        cout<<"Enter x-> for base1: "<<endl;
        cin>>x;

    }

};

class Base2{
    protected:
    int x;
    public:
    void input(){
        cout<<"Enter x-> for Base2: "<<endl;
        cin>>x;

    }
};

class Derived: public Base1, public Base2{
    protected:
    int x;
    public:
    void input(){
        Base1::input();
        Base2::input();
        cout<<"Enter x-> for Derived class: "<<endl;
        cin>>x;
    }

    void display(){
        cout<<"The sum of x's is : "<<Base1::x+Base2::x+x;
    }
};

int main(){
    Derived D;

    D.input();
    D.display();

    return 0;
    
}