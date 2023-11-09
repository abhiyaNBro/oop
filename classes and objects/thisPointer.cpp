// return largest magnitude using this pointer!
#include<iostream>
#include<cmath>
using namespace std;

class Complex{
    float real, imag;
    public:
    Complex(){
        cout<<"Enter real and imag part: "<<endl;
        cin>>real>>imag;

    }

    void display(){
        cout<<"Real: "<<real<<" Imag: "<<imag<<endl;

    }

    Complex mag(Complex cc){
        float mag1, mag2;

        mag1=sqrt(real*real+imag*imag);
        mag2=sqrt(cc.real*cc.real+cc.imag*cc.imag);

        if(mag1>mag2){
            return *this;
        }
        else{
            return cc;

        }

    }
};

int main(){
    Complex c1, c2;
    Complex c3= c1.mag(c2);
    cout<<"The largest is : "<<endl;

    c3.display();

    return 0;



}
