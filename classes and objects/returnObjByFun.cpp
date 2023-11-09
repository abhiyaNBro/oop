#include<iostream>
using namespace std;

class Complex{
    int real , imag;
    public:
    Complex(){
        real=imag=0;

    }
    Complex(int x, int y){
        real=x;
        imag=y;
    }

    void display(){
        cout<<"The Sum is : "<<real<<"+i"<<imag<<endl;

    }

    Complex addCmplx(Complex cc1){
        Complex c;
        c.real=cc1.real+real;//jasle call garxa, tesko real part=real
        c.imag=cc1.imag+imag;//jasle call garxa, tesko imag part=imag
        return c;
    }

};



int main(){
    Complex c1, c2(2,3), c3(3,4);
    
    c1=c2.addCmplx(c3);

    c1.display();

    return 0;


}
