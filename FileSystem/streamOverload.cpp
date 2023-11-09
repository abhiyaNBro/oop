//wap to overload << and >> operator to read hr min and sec and display it

#include<iostream>
using namespace std;

class Time{ 
    int hr, min ,sec;
    public:
    Time(){
        hr=min=sec=0;

    }

    friend istream &operator>> (istream &is, Time &t1);
    friend ostream &operator<< (ostream &os, Time &t1);

};

istream &operator>>(istream &is, Time &t1){
    is>>t1.hr>>t1.min>>t1.sec;
    return is;

}

ostream &operator<< (ostream &os, Time &t1){
    os<<t1.hr<<"hrs"<<t1.min<<"mins"<<t1.sec<<"sec";
    return os;

}

int main(){
    Time t;
    cout<<"Enter the time: "<<endl;
    cin>>t;
    cout<<"The entered time is: "<<endl;
    cout<<t;

    return 0;

}