//count number of obj created:

#include<iostream>
using namespace std;

class Count{
    static int count;
    public:

    Count(){
        count++;

    }

    void display(){
    cout<<"No. of objs created: "<<count<<endl;
    }
    
};

int Count :: count=0; //initializing static member variable outside the class.

int main(){
    Count c1, c2, c3, c4;

    c4.display();
    return 0;

}

