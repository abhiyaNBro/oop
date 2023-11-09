#include<iostream>
using namespace std;

void divide(int x, int y)
{
    try{
        if(y!=0){
            cout<<"The result is :"<<x/y<<endl;

        }
        else{
            throw(y);
        }

    }
    catch(int y){
        cout<<"Cannot handle exception! "<<endl;
        throw;
        
    }


}
int main(){
    int a, b;
    cout<<"Enter value of a and b: "<<endl;
    cin>>a>>b;

    try{
        divide(a, b);
    }
    catch(int e)
    {
        cout<<"Divide by 0 exception caught!"<<endl;

    }
}