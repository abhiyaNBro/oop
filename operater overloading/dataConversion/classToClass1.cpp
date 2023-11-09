

#include<iostream>
using namespace std;
#include<cmath>

class Polar{
    float radius, angle;

    public:
    Polar(){
        radius=angle=0;

    }

    Polar(float r, float a){
        radius=r;
        angle=a;

    }

    float ret_radius()
    {
        return radius;

    }

    float ret_angle(){
        return angle;

    }

    void display(){
        cout<<"Radius: "<<radius<<" Angle: "<<angle<<endl;


    }
};

class Cartesian{
    float xcord, ycord;
    public: 

    Cartesian()
    {
        xcord=ycord=0;

    }
    Cartesian(Polar &p){
        xcord=p.ret_radius()*cos(p.ret_angle());
        ycord=p.ret_radius()*sin(p.ret_angle());

    }

    void Display(){
        cout<<"Equivalent Cartesian: X->"<<xcord<<" Y->"<<ycord;

    }
};

int main(){
    Polar p(5, 45);
    Cartesian c;

    c=p;
    p.display();

    c.Display();

    return 0;
    
}