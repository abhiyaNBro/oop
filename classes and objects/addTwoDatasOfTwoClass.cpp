#include<iostream>
using namespace std;

class B; //forward declaration
class A{
    int data1;
    public:
    A(int x){
        this->data1=x;

    }

    friend int add( A, B);

};

class B{
    int data2;
    public:
    B(int x){
        this->data2=x;

    }

    friend int add(A, B);


};

int add(A a, B b){
    return(a.data1+b.data2);

}

int main(){
    A a1(10);
    B b1(20);

    cout<<"The sum is : "<<add(a1,b1);
    return 0;
    

}