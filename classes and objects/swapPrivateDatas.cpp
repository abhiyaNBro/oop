//Swap private data memebrs using friend class:

#include<iostream>
using namespace std;

class Test2;

class Test1{
    int x;
    public:
    Test1(int a){
        x=a;

    }

    friend void swap(Test1 &, Test2 &);

    void display(){
        cout<<"x->"<<x<<endl;

    }

};

class Test2{
    int y;
    public:
    Test2(int a){
        y=a;

    }

    friend void swap(Test1 &, Test2 &);

     void display(){
        cout<<"y->"<<y<<endl;
        
    }

};

void swap(Test1 &t1, Test2 &t2)//referance variable
{
    int temp;
    temp=t1.x;
    t1.x=t2.y;
    t2.y=temp;
    

}

int main(){
    Test1 x(10);
    Test2 y(20);

    cout<<"Before swap: "<<endl;
    x.display();
    y.display();

    swap(x, y);

    cout<<"After swap: "<<endl;
    x.display();
    y.display();

    return 0;

    
}
