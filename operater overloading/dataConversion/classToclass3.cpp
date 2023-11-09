// tola to gram class to class conversion --> one argument parameterized cons.

#include<iostream>
using namespace std;

class Tola{
    float tola;
    public:
    Tola(){};

    Tola(float t){
        tola=t;

    }

    float ret_tola(){
        return tola;

    }

    void dipslay(){
       cout<<"Tola->"<<tola<<endl;

    }

};

class Gram{
    float gram;
    public:
    Gram(){
        gram=0;
    }
    
    Gram(Tola &t){
        gram=11.66*(t.ret_tola());

    }

    void display(){
        cout<<"Equivalent Gram: "<<gram<<endl;

    }

};

int main(){
    Tola T(10);

    Gram G;

    G=T;

    T.dipslay();
    G.display();

    return 0;


}