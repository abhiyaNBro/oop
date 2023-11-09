// Constructor And Destructor Invocation In Single Heritance
//constructor--> first base then derived.
//destructor --> first derived then base.

#include<iostream>
using namespace std;

class Base{
    public:

    Base(){
        cout<<"Base class Constructor called! "<<endl;
    }

    ~Base(){
        cout<<"Base class Destructor called!"<<endl;
    }

};

class Derived: public Base{
    public:

    Derived(){
        cout<<"Derived class Constructor called! "<<endl;
    }

    ~Derived(){
        cout<<"Derived class Destructor called! "<<endl;

    }
};

int main(){
    Derived d;
    return 0;

}