#include<iostream>
using namespace std;

class base{
    public:
    virtual void fun(){}

};

class myclass: public base{

};

class yourclass: public base{};

int main(){
    base *b;
    myclass m, *mp;

    b=&m;

    if(mp=dynamic_cast<myclass*>(b))
    {
        cout<<endl<<"Of Type MyClass";

    }
    else{
        cout<<endl<<"Not Of Type MyClass";
    }

    yourclass y;

    b=&y;

    if(mp=dynamic_cast<myclass*>(b)){
        cout<<endl<<"Of Type MyClass"<<endl;

    }   
    else{
        cout<<endl<<"Not of Type MyClass"<<endl;

    } 

    return 0;
    
}