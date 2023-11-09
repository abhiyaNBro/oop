#include<iostream>
using namespace std;

class XYZ;
class ABC{
    int data1;
    public:
    friend class XYZ;

};

class XYZ{
    int data2;
    public:
    void getData(ABC &);
    void Add(ABC);
    void Sub(ABC);
    
};

void XYZ :: getData(ABC  &obj1){
    cout<<"Enter data1 and data2: "<<endl;
    cin>>obj1.data1>>data2;
}

void XYZ::Add(ABC obj1){
    cout<<"the sum is : "<<(obj1.data1+data2)<<endl;

}

void XYZ::Sub(ABC obj1){
    cout<<"the diff is : "<<(obj1.data1-data2)<<endl;
      
}

int main(){
    XYZ A;
    ABC B;

    A.getData(B);
    A.Add(B);
    A.Sub(B);

    return 0;
    
}

