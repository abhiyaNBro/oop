#include<iostream>
using namespace std;

class Money{
    int rupee, paisa;
    public:
    Money(){
        rupee=paisa=0;

    }
    Money(int r, int p){

        rupee=r;
        paisa=p;
    
    }
    
    Money operator +(Money &mm){
        int totalPaisa= (paisa+mm.paisa)+(rupee+mm.rupee)*100;
        Money temp;

        temp.rupee=totalPaisa/100;
        totalPaisa=totalPaisa%100;
        temp.paisa=totalPaisa;

        return temp;

    }

    Money operator -(Money &mm){
        int totalPaisa= (paisa-mm.paisa)+(rupee-mm.rupee)*100;
        Money temp;

        temp.rupee=totalPaisa/100;
        totalPaisa=totalPaisa%100;
        temp.paisa=totalPaisa;

        return temp;
        
    }

    void displaySum(){
        cout<<"The sum is : "<<rupee<<"Rs  and "<<paisa<<"Paisa"<<endl;

    }   

    void displayDiff(){
        cout<<"The diff is : "<<rupee<<"Rs  and "<<paisa<<"Paisa"<<endl;
    }

};

int main(){
    Money msum,mdiff, m1(5,10), m2(12,45);

    msum=m1+m2;
    mdiff=m1-m2;

    msum.displaySum();
    mdiff.displayDiff();

    return 0;


}
