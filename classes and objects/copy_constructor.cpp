#include<iostream>
using namespace std;

class Complex{
    int real, imag;

    public:

    Complex(){//default
        real=imag=0;

    }

    Complex(int a, int b){//parameterized
        real=a;
        imag=b;
    }

    Complex(Complex &x ){//copy
        real=x.real;
        imag=x.imag;
    }

    void display(){
        cout<<real<<"+i"<<imag<<endl;

    }
};

int main(){
    Complex c1, c2(3, 4), c3(c2); //implicit 
    Complex c4=c2;//explicit

    c4=c2; //This doesnt invoke copy constructor!

    c1.display();
    c2.display();
    c3.display();
    c4.display();
    return 0;
    
}

