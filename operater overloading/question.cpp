

#include<iostream>
using namespace std;

class Complex{
    float real, imag;
    public:
    void getData(){
        cout<<"Enter the real and imaginary part: "<<endl;
        cin>>real>>imag;

    }

    void showData(){
        cout<<real<<"+i"<<imag<<endl;

    }

    friend Complex operator *(int x, Complex &cc);

};

Complex operator * (int x, Complex &cc){
    Complex temp;

    temp.real=x*cc.real;
    temp.imag=x*cc.imag;
    return temp;

}

int main(){
    Complex c1, c2;

    c1.getData();
    c2=9*c1; //c2=9.operator*(c1);

    c2.showData();

    return 0;

}