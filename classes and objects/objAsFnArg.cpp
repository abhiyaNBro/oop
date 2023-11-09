//Add time using object as function argument;

#include<iostream>
using namespace std;

class Time{
    int hr, min, sec;
    public:

    Time(){
        hr=min=sec=0;

    }

    Time(int x, int y, int z){
        hr=x;
        min=y;
        sec=z;

    }

    void addTime(Time t1, Time t2){

        int totalS=0;
        totalS=(t1.hr+t2.hr)*3600+(t1.min+t2.min)*60+(t1.sec+t2.sec);

        hr=totalS/3600;
        totalS=totalS%3600;
        min=totalS/60;
        sec=totalS%60;

    }
    void display(){
    cout<<"The sum od 2 time is : "<<hr<<":"<<min<<":"<<sec<<endl;
    }
};

int main(){

    Time t1, t2(2, 30, 40), t3(3, 42, 10);
    t1.addTime(t2,t3);
    t1.display();   
    return 0;
    
}