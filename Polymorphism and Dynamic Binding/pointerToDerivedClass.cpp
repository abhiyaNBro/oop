#include<iostream>
using namespace std;

class Base{
    public:
    int m;
    void display(){
        cout<<"The value of m is : "<<m<<endl;
    }
};

class Derived : public Base{
    public:
    int n;
    void display(){
    cout<<"The value of m: "<<m <<"and n: "<<n<<endl;
    }
};

int main(){
    Base *bptr; //pointer object
    Base b1; //normal object

    bptr=&b1; //Base class ko pointer le Base class ko object lai point gareko!
    bptr->m=10; //Base class ko data member(m) lai 10 set gareko.
    bptr->display();

    // for derived class:

    Derived *dptr;
    Derived d1;

    dptr=&d1;
    dptr->n=20;
    dptr->display();
    //derived class ko pointer ko accessibility tesko (derived calss ko) object ra tesko member ma matra hunxa. 
    // base class ko member ra object ma hudaina. so dptr->display() statement ma m ko value garbage auxa.

    return 0;

}