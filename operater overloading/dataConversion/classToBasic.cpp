// class to basic convert garda --> casting operator fn use garnu parxa. 
// jasko return type hudaina ra kunai argument lidaina tara return garxa. 

//--> program to convert from celsius to fahrenheit

#include<iostream>
using namespace std;

class celsius{
    int temp;
    public:
    celsius(){
        cout<<"Enter temp is Celsius: "<<endl;
        cin>>temp;
        

    }

    operator int(){   //casting operator
        int fah;
        fah=(temp*1.8)+32;
        return fah;

    }

};

int main(){
    celsius Celsius;
    int Fahrenhite;

    Fahrenhite=Celsius;

    cout<<"The eq temp in Fahrenhite is : "<<Fahrenhite<<endl;

    return 0;



}