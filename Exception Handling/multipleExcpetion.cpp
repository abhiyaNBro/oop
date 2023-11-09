#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    char K[]="Kathmandu";

    cout<<"Enter x and y"<<endl;
    cin>>x>>y;

    z=x-y;

    try{
        if(z==0){
            throw(z);

        }
        else{
            cout<<"Result of (x/z) is : "<<x/z<<endl;

        }

        for(int i=0; i<20; i++){
            cout<<K[i];

            if(i>8){
                throw(K[i]);
            }

        }
    }
    
    catch(int ei){
        cout<<"Divide by 0 excpetion caught! "<<endl;
    }
    catch(char ec){
        cout<<"\nArray out of bound exception caught! "<<endl;
    }

    return 0;
}