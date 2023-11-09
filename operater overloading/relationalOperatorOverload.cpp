#include<iostream>
using namespace std;

class Compare{
    int value;
    public:
    Compare(){
        value=0;
    }
    Compare(int x){
        value=x;

    }

    int ret_value(){
        return value;
    }

    int operator <(Compare &c){
        if(value<c.value){
            return 1;
        }
        else{
            return 0;
            
        }
    }

};

int main(){
    Compare c1(5),c2(10);

    cout<<"Value 1 -> "<<c1.ret_value()<<endl;
    cout<<"Value 2 -> "<<c2.ret_value()<<endl;

    if(c1<c2){ //c1.operator < (c2)
        cout<<"Value 1 is smaller"<<endl;

    }
    else{
        cout<<"Value 2 is smaller"<<endl;

    }


    return 0;
}
