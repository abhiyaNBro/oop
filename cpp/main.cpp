#include<iostream>
using namespace std;


void fn(int a, int b=2){
    int x, y;
    x=a;
    y=b;
    cout<<"X-> "<<x<<" and Y-> "<<y<<endl;

}

void fn(float a ){
    float x;
    x=a;
    cout<<"X-> "<<x<<endl;

}

int main(){

    fn(2,4);
    fn(4.4);
    return 0;
}



