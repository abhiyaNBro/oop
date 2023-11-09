#include<iostream>
using namespace std;

class Complex{
    int real, imag;

    public:

    friend Complex add(Complex, Complex);

    Complex(){
        real=imag=0;

    }

    Complex(int x, int y){
        this->real=x;
        this->imag=y;

    }

    void showData(){
        cout<<"The addition is : "<<real<<"+i"<<imag<<endl;

    }

};

Complex add(Complex cc1, Complex cc2){
    Complex temp;
    temp.real=cc1.real+cc2.real;
    temp.imag=cc2.imag+cc1.imag;
    return temp;
    
}

int main(){
    Complex c1, c2(1,2), c3(3,4);
    c1=add(c2,c3);

    c1.showData();
    return 0;

}
