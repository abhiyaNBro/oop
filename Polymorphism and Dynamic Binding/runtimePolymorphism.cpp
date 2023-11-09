// WAP to show run time polymorphism:

#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void display(){ 
        cout<<"We are in Animal Class"<<endl;

    }
};

class Cow : public Animal{
    public:
    void display(){ 
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
    Animal *ptr; 
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