#include<iostream>
using namespace std;
#include<string>

class Employee{
    protected:
    string name;
    int salary;
    public:
    void get(){
        cout<<"Enter the name and salary: "<<endl;
        cin>>name>>salary;

    }

    void show(){
        cout<<"Name: "<<name<<endl<<"Salary: "<<salary<<endl;
    }
};

class Manager: public Employee{
    protected:
    string title;
    public:
    void get(){
        Employee::get();

        cout<<"Enter the Title: "<<endl;
        cin>>title;

    }

    void show(){
        Employee::show();

        cout<<"Title: "<<title;

    }

};

class Teacher: public Employee{
    protected:
    string faculty;
    public:
    void get(){
        Employee::get();

        cout<<"Enter the faculty: "<<endl;
        cin>>faculty;

    }

    void show(){
        Employee::show();

        cout<<"Faculty: "<<faculty<<endl;
    }
};

int main(){ 
    Manager m;
    Teacher t;
    int x;
    cout<<"You are: \n1.Manager\n2.Teacher"<<endl;
    cin>>x;

    switch(x){
        case 1: 
        m.get();
        cout<<endl;
        m.show();
        break;

        case 2: 
        t.get();
        cout<<endl;
        t.show();
        break;

        default:
        cout<<"Please choose valid options"<<endl;
    }

    return 0;


}