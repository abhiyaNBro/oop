#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter any number"<<endl;
    cin>>x;
    int count =0;
    for(int i=1; i<=x; i++){
        if(x%i==0){
            count++;

        }
    }
    
    if(count==2){
        cout<<"The number "<<x<<" is a prime number"<<endl;
    }
    else{
        cout<<"The number is not a prime number!"<<endl;
    }
    return 0;
}
