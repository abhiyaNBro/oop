//overload uninary postfix ++ using member operator fn and postfix -- using friend fn
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

    void operator ++(int){ //member fn-> no args
        count++;
    }

    friend Counter operator -- (Counter &c, int); //friend fn-> 1 arg. (int)--> indicates --> postfix



};

Counter operator --(Counter &c, int){
    Counter temp;
    temp.count=c.count--;
   

}

int main(){
    Counter c(10);
    cout<<"Count: "<<c.show()<<endl;

    c++;
    cout<<"Count: "<<c.show()<<endl;

    c--;
    cout<<"Count: "<<c.show()<<endl;

    return 0;

}