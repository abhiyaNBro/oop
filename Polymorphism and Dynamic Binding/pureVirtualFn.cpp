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
    

    float area(){ 
        return (length*breadth);

    }
};

int main(){
    parellogram *ptr; 
    rectangle rec(2.0,3.0);

    ptr=&rec;

    cout<<"Perimeter: "<<ptr->perimeter()<<endl;

    cout<<"Area: "<<ptr->area()<<endl;

    return 0;
    



}   