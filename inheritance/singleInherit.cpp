#include<iostream>
using namespace std;
#include<string>

class Employee{
    protected:
    string name;
    int salary;
    public:
    void input(){
        cout<<"Enter the name and and Salary : "<<endl;
        cin>>name>>salary;

    }
};

class Designation : public Employee{
    protected:
    string post;
    public:
    void input(){

        cout<<"Enter the Designation : "<<endl;
        cin>>post;

    }

    void display(){
        cout<<"Name: "<<name<<endl<<"Salary: "<<salary<<endl<<"post: "<<post<<endl;

    }
};

int main(){
    Designation D;
    D.Employee::input();
    D.input();

    D.display();

    return 0;

}