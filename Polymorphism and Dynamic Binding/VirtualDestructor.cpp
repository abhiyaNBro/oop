#include<iostream>
using namespace std;

class base{
    public:
    virtual ~base(){
        cout<<"Base class virtual destructor"<<endl;

    }
};

class derived: public base{
    public:
    ~derived(){
        cout<<"Derived class destructor"<<endl;

    }

};

int main(){
    base *pbase= new derived; //dynamic memory alloc

    delete pbase;

    return 0;

}