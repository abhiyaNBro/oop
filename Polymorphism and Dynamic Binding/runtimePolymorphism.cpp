// WAP to show run time polymorphism:

#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void display(){ //yedi virtual nahune bhaye, Animal class ko pointer obj le derived calss 
    //ko object lai point matra garna milthyo tara access garna mildaina thiyo. so virtual keyword needed.
        cout<<"We are in Animal Class"<<endl;

    }
};

class Cow : public Animal{
    public:
    void display(){ //virtual keyword derived class ma use na garey pani hunxa.
        cout<<"We are in Cow Class"<<endl;

    }
};

class Dog: public Animal{
    public:
    void display(){
    cout<<"We are in Dog Class"<<endl;
    }
};

int main(){
    Animal *ptr; //animal class ko pointer obj create
    Animal a;
    Cow c;
    Dog d; //normal object 

    ptr=&a;
    ptr->display();
    ptr=&c;
    ptr->display();
    ptr=&d;
    ptr->display();

    return 0;

}