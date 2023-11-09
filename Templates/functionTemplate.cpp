// pass array of different type and print the largest value using fn template
#include<iostream>
using namespace std;

template<class T>

T largest(T A[], int size){
    T larg;

    larg=A[0];

    for(int i=0;i<size;i++){
        if(A[i]>larg){
            larg=A[i];
        }
    }

    return larg;
}

int main(){

    int arr[]={1,2,4,6,12,4,8};
    float brr[]={1.1,4.2,1.3,6.4,4.5};

    cout<<"The largest int array element is : "<<largest(arr,7)<<endl;
    cout<<"The largest float array element is : "<<largest(brr,5);

    return 0;


}