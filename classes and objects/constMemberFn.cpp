#include<iostream>
#include<cmath>

using namespace std;

class Coordiante{
    int x, y;
    public:
    void getData(){
        cout<<"Enter value of x and y : "<<endl;
        cin>>x>>y;
    }

    void showData()const;

};

void Coordiante::showData()const{
    float mag;
    cout<<"X: "<<x<<", Y: "<<y<<endl;

    mag=sqrt(x*x+y*y);
    cout<<"Magnitude: "<<mag;

    // x++; error, can't modify value in const fn. 

}

int main(){
    Coordiante c;
    c.getData();
    c.showData();
    return 0;

}

