#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;

    int x= a-b;

    try{
        if(x!=0){
            cout<<"The result is : "<<a/x<<endl;
       }
        else{
            throw(x);
        }
    }

    catch(int i) 
    {
        cout<<"Exception caught: x="<<i<<endl;
    }

    return 0;
}