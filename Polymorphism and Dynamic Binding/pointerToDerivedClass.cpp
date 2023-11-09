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

    bptr=&b1; 
    bptr->m=10; 
    bptr->display();

    // for derived class:

    Derived *dptr;
    Derived d1;

    dptr=&d1;
    dptr->n=20;
    dptr->display();
    

    return 0;

}