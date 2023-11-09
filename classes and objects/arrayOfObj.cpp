#include<iostream>
#include<string>

using namespace std;

class employee{
    string name;
    int age;

    public:
    void getData(){
        cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Enter your age: "<<endl;
        cin>>age;

    }

    void showData(){
        cout<<"Name is : "<<name<<endl;
        cout<<"Age is : "<<age<<endl;

    }
};

const int size= 3;

int main(){
    employee E[size];

    for(int i=0;i<size;i++){
        E[i].getData();

    }

    for(int i=0; i<size;i++){
        E[i].showData();

    }

    return 0;
    
}