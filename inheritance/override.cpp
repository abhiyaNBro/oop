

#include<iostream>
using namespace std;

class Base{
    protected:
    int x;

    public:

    void input(){
        cout<<"Enter the value of x: (for Base Class) ->"<<endl;
        cin>>x;

    }

};

class Derived: public Base{
    protected:
    int x;
    public:
    void input(){
        Base::input();
        cout<<"Enter the value of x : (for Derived class) ->"<<endl;
        cin>>x;

    }

    void output(){
        cout<<"The sum of Two x's is : "<<x+Base::x<<endl;

    }
};

int main(){

    Derived D;
    D.input();
    D.output();

    return 0;


}