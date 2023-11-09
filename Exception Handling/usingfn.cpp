#include<iostream>
using namespace std;

void divide(int x, int y){
    int z;
    z=x-y;

    if(z!=0){
        cout<<"The result (x/z) : "<<x/z<<endl;

    }
    else
        throw(z);

}

int main(){
    try{
    divide(10, 20 );
    divide(10,10);
    }
    catch(int z){
        cout<<"Exception caught! "<<endl;
    }
}