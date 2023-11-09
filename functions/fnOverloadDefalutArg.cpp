#include<iostream>
using namespace std;


void fnx(int i ){
    cout<<"The values are : "<<i<<endl;
}

void fnx(int k, int l=10){
    cout<<"The values are : "<<k<<"and"<<l<<endl;
}

int main(){
    // fnx(2); //ambigous
    fnx(2,3);

    return 0;
}