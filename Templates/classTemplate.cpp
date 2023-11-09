#include<iostream>
using namespace std;

template<class t1, class t2>

class ShowValue{
    private:
    t1 x;
    t2 y;
    public:
    ShowValue(){
        x=y=0;

    }
    ShowValue(t1 xx, t2 yy ){
        x=xx;
        y=yy;

    }
    
    void show(){
        cout<<"The values are: "<<x<<", "<<y<<endl;
    }
    
};

int main(){
    ShowValue <int,int>s1(2,3);
    ShowValue <int,float>s2(5,5.5);

    s1.show();
    s2.show();

    return 0;

}