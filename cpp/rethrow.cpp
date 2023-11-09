#include<iostream>
using namespace std;

void divide(int x, int y){
    try{
        if(y==0){
            throw(y);
        }
        else{
            cout<<"The result is : "<<x/y<<endl;
        }
    }

    catch(int y){
        cout<<"Cannot handle exception!"<<endl;
        throw;
    }
}

int main(){
    int x,y;
    cout<<"Enter x and y : "<<endl;
    cin>>x>>y;

    try{
        divide(x,y);

    }
    catch(int y){
        cout<<"Exception caught!"<<endl;
    }
}