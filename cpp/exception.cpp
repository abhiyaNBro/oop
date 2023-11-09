#include<iostream>
using namespace std;

int main(){
    int y, z, x;

    cout<<"Enter the value of x and y : "<<endl;
    cin>>x>>y;

    z=x-y;

    try{
        if(z!=0){
            cout<<"x by difference = "<<x/z<<endl;

        }
        else{
            throw(z);

        }
    }

    catch(int z){
        cout<<"Divide by 0 exxeption found!"<<endl;
    }   

    return 0;


}