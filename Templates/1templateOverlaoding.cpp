// overloading using normal function

#include<iostream>
using namespace std;

template<class T>
void sayValue(T x, T y){
    cout<<"sayValue(T x, T y) X->"<<x<<" Y->"<<y<<endl;
}

void sayValue(int x, int y){
    cout<<"sayValue(int x, int y) X->"<<x<<" Y-> "<<y<<endl;

}

int main(){
    sayValue(1,2);//both fn executes but higher preferance is given to non template fn. so 2nd one runs

    sayValue(1.1,2.2);//1st one
}