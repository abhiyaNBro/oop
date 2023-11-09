//overload uninary prefix ++ using member operator fn and prefix -- using friend fn

#include<iostream>
using namespace std;

class Counter{
    int count;
    public:

    Counter(){

    }

    Counter(int x){ 
        count=x;

    }

    int show(){
        return count;


    }

    void operator ++(){
        ++count;

    }

    friend Counter operator --(Counter &);


};

Counter operator --(Counter &c1){
    Counter temp;
    temp.count=--c1.count;
    return temp;

}

int main(){
    Counter c(10);
    cout<<"Count: "<<c.show()<<endl;

    ++c;
    cout<<"Count: "<<c.show()<<endl;

    --c;

    cout<<"Count: "<<c.show()<<endl;
    return 0;

}
