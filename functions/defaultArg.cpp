#include<iostream>
using namespace std;

void myFunc(int a, int b=10){
    cout<<"The values are : a= "<<a<<"and b= "<<b<<endl;
    
}

int main(){
    
    myFunc(5);
    myFunc(2,3);

    return 0;
}