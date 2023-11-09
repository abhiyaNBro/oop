#include<iostream>
using namespace std;
class parellogram{
    protected:
    float length , breadth;
    public:
    parellogram(){
        length=breadth=0.0;
    }

    parellogram(float l, float b){
        length=l;
        breadth=b;

    }

    virtual float perimeter(){
        return(2*(length+breadth));

    }

    virtual float area()=0;//pure virtual fn

};

class rectangle: public parellogram{
    public:
    rectangle(){}

    rectangle(float l, float b):parellogram(l,b){}
    //base class ma constructor use gareko xa bhane derived class
    //ma compulsary constructor use garnai parne hunxa.
    //kinaki tya bata value pass garne ho base class ko member lai initialize garna.

    float area(){ //pure virtual function lai override gareko.
    // garena bhane yo derived class pani abstract class hunxa.
        return (length*breadth);

    }
};

int main(){
    parellogram *ptr; //abstract class xa bhane teslai pointer object nai banaunu parne hunxa
    rectangle rec(2.0,3.0);

    ptr=&rec;

    cout<<"Perimeter: "<<ptr->perimeter()<<endl;

    cout<<"Area: "<<ptr->area()<<endl;

    return 0;
    



}   