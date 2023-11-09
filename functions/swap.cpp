#include<iostream>

using namespace std;

void swap(int &x , int &y){
    int t;
    t=x;
    x=y;
    y=t;
}

int main(){
    int x, y;

    cout<<"Enter x and y : "<<endl;
    cin>>x>>y;

    cout<<"Before swap: x-> "<<x<<" and y -> "<<y<<endl;

    swap(x,y);

    cout<<"After swap: x-> "<<x<<" and y -> "<<y<<endl;


}