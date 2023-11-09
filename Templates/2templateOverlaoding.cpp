// overloading using other template function

#include<iostream>
using namespace std;

template<class T>
void display(T data1, T data2){
    cout<<"display(T data1, T data2) data1= "<<data1<<" data2="<<data2<<endl;

}

template<class T1, class T2>
void display(T1 data1, T2 data2){
    cout<<"display(T1 data1, T2 data2) data1= "<<data1<<" data2="<<data2<<endl;
}

int main(){
    display(1,2); //1st
    display(2.2,3.2); //1st
    display(2,3.3); //2nd
}