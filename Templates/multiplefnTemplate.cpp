// calculate sum and avg of array of different type;

#include<iostream>
using namespace std;

template <class T1, class T2>
void calculate(T1 A[],int size,T2 &sum, T2 &avg){
    for(int i=0;i<size;i++){
        sum+=A[i];

    }

    avg=sum/size;

}

int main(){
    int arr[]={1,2,3,4,5};
    float sum, avg;
    sum=0.0;
    avg=0.0;

    calculate(arr,5,sum,avg);
    cout<<"The sum is : "<<sum<<" and the average is : "<<avg<<endl;

}