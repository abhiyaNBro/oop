#include<iostream>
#include<typeinfo>

using namespace std;
class base{
    public:
    virtual void fun(){}
};

class myclass: public base{

};
class yourclass : public base{

};

int main(){
    base *b1;
    cout<<endl<<typeid(b1).name();
    myclass m;
    b1=&m;
    cout<<endl<<typeid(*b1).name();

    base *b2;
    yourclass y;
    b2=&y;

    cout<<endl<<typeid(*b2).name();

    if(typeid(*b1)==typeid(*b2))
    cout<<endl<<"Equal";
    else
    cout<<endl<<"Unequal";

    cout<<endl<<typeid(60).name();
    cout<<endl<<typeid(1.1).name();

    return 0;

}
