// Program Showing Conversion of Object of Type Polar to Object of Type Cartesian Using Casting Operator Function

// casting fn use --> casting operator source ma present hunu parxa.

#include<iostream>
using namespace std;
#include<cmath>

class Cartesian;

class Polar{
    float radius, angle;
    public:
    Polar(){
        radius=angle=0;

    }

    Polar(float x, float y){
        radius=x;
        angle=y;

    }

    operator Cartesian();

    void display(){
        cout<<"Radius: "<<radius<<" Angle: "<<angle<<endl;

    }

};

class Cartesian{
    float xcord, ycord;
    public:

    Cartesian(){};

    Cartesian(float x, float y){
        xcord=x;
        ycord=y;

    }

    void display(){
        cout<<"The equivalent Cartesian is : x->"<<xcord<<" Y->"<<ycord<<endl;

    }


};   

Polar::operator Cartesian(){
    float x,y;

    x=radius*sin(angle);
    y=radius*cos(angle);

    return Cartesian(x,y);

}

int main(){
    Polar p(5,45);

    Cartesian c;

    c=p;

    p.display();
    c.display();

    return 0;

}