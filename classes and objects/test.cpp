// private value swap of two classes:

#include<iostream>
using namespace std;

class Class2;
class Class1{
    int data1;
    public:
    Class1(int x){
        data1=x;

    }

    friend void swap(Class1 &, Class2 &);
    void display(){
        cout<<"The value of class 1 is : "<<data1<<endl;

    }

};

class Class2{
    int data2;
    public:
    Class2(int x){
        data2=x;
    }

    friend void swap(Class1 &, Class2 &);

    void display(){
        cout<<"The value of class 2 is : "<<data2<<endl;
        
    }
};

void swap(Class1 &obj1, Class2 &obj2){
    int temp;
    temp=obj1.data1;
    obj1.data1=obj2.data2;
    obj2.data2=temp;

}

int main(){
    Class1 c1(2);
    Class2 c2(3);

    cout<<"Before swap: "<<endl;
    c1.display();
    c2.display();

    cout<<"After swap: "<<endl;
    swap(c1, c2);

    c1.display();
    c2.display();

    return 0;
    

}