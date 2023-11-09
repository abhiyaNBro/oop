#include<iostream>
using namespace std;

class Time{
    int hr, min, sec , total;

    public:
    Time(){
        hr=min=sec=0;

    }
    Time(int x, int y, int z){
        hr=x;
        min=y;
        sec=z;
        total=((hr*3600)+(min*60)+sec);

    }

    Time operator +(Time t2){
        Time temp;
        int totalsec= total+ t2.total;

        temp.hr=totalsec/3600;
        totalsec=totalsec%3600;
        temp.min=totalsec/60;
        temp.sec=totalsec%60;
        
        return temp;

    }

    void ShowData(){
        cout<<"The sum is "<<hr<<":"<<min<<":"<<sec<<endl;

    }


};

int main(){
    Time t1(2,50,12),t2(3,21,42), t3;

    t3=t1+t2;

    t3.ShowData();
    return 0;


}