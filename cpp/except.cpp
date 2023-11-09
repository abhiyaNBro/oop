#include<iostream>
using namespace std;

int main(){
    int x, y, z;
    char ch[]="kathmandu";

    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    z=x-y;

    try{
        if(z==0){
            throw(z);
        }
        else{
            cout<<"The result of x/z is: "<<x/z<<endl;
        }

        for(int i=0; i<20 ;i++){
            cout<<ch[i];

            if(i>8){
                throw(ch[i]);
            }
        }
    }

    catch(int int_exception){
        cout<<"Divide by 0 exception cauught! "<<endl;

    }
    catch(char char_exception){
        cout<<"Array out of bound exception caught! "<<endl;

    }

    return 0;

}