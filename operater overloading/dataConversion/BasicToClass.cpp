// one arg parameterized constructor banaunu parxa!.
#include<iostream>
using namespace std;

class Time{
    int hr, min, sec;
    public:

    Time(){ 
        hr=min=sec=0;
    }

    Time(int x){
        hr=x/3600;
        x=x%3600;
        min=x/60;
        sec=x%60;
    }

    void showData(){
        cout<<"Hour-> "<<hr<<" Min-> "<<min<<" Sec-> "<<sec<<endl;

    }

};  

int main(){
    int durationS= 3695;

    Time t;

    t=durationS; //Time t(3695) --> parameterized constructor. -->Time t = 3695

    t.showData();

    return 0;
    

}
