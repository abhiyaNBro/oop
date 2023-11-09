#include<iostream>
using namespace std;

enum weeks{
    sun, mon, tue, wed, thu, fir, sat

};

int main(){
    
    weeks d1, d2;

    d1=sun;
    d2=thu;

    int diff= d2-d1;

    cout<<"Difference btn days: "<<diff<<endl;


    return 0;


}