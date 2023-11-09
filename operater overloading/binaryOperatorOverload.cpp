//using member operator fn--> takes one agr.

#include<iostream>
using namespace std;

class Complex{
    float real, imag;

    public:
    void getComplex(){
        cout<<"Enter real and imag part: "<<endl;
        cin>>real>>imag;

    }

    void showData(){
        cout<<"Real: "<<real<<" Imag: "<<imag<<endl;

    }

    Complex operator +(Complex &c1){
        Complex temp;
        temp.real=real+c1.real;
        temp.imag=imag+c1.imag;
        return temp;

    }   

};

int main(){
    Complex c1, c2, c3;
    c1.getComplex();
    c2.getComplex();
    c3=c1+c2; //c3=c1.operator +(c2); 

    c3.showData();
    return 0;


}