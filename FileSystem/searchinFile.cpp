#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Student
{
    int roll;
    float marks;
    char name[40], address[40];

public:
    void getdata()
    {
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "Enter your roll: " << endl;
        cin >> roll;
        cout << "Enter your marks: " << endl;
        cin >> marks;
        cout << "Enter your address: " << endl;
        cin >> address;
    }

    void displayData()
    {
        cout << "Name -> " << name << endl;
        cout << "Roll -> " << roll << endl;
        cout << "Marks -> " << marks << endl;
        cout << "Address -> " << address << endl;
    }

    int check(int r){
        if(r==roll){
            return 1;
        }
        else{
            return 0;

        }
    }
};

void addRecord()
{
    Student s[3];
    fstream fout;
    
    fout.open("Student.txt", ios::app | ios::out | ios::binary);

    
    for (int i = 0; i < 3; i++)
    {   
        cout<<"Enter the data of Student "<<i+1<<endl; 
        s[i].getdata();
        fout.write((char *)&s[i], sizeof(s[i]));
    }

    fout.close();
}

void displayRecords(){
    Student s;  
    fstream fin;

    fin.open("Student.txt", ios::in | ios::binary );
    while( fin.read((char*)&s, sizeof(s))){
        s.displayData();
        cout<<endl;

    }

}

void search(){
    Student s;
    fstream fin;
    int flag=0;
    int roll;

    cout<<"Enter the roll number to be searched: "<<endl;
    cin>>roll;
    
    fin.open("Student.txt", ios:: in | ios::binary);
    while(fin.read((char *)&s, sizeof(s))){
        if(s.check(roll)){
            s.displayData();
            flag=1;
            break;
        }
    }

    if(flag==0){
            cout<<"Roll no not found!"<<endl;

        }
}

int main(){
    int n;
    bool X=true;

    while(X){
        cout<<"1. Add record "<<endl;
        cout<<"2. Display all records "<<endl;
        cout<<"3. Search specific record "<<endl;
        cout<<"4. Exit "<<endl;
        cout<<endl;

        cout<<"Enter the choice -> "<<endl;
        cin>>n;

        switch(n){
            case 1: 
                addRecord();
                break;
            case 2: 
                displayRecords();
                break;
            case 3: 
                search();
                break;
            case 4:
                X=false;  
                break;
                  

            default:
            cout<<"please choose from (1-4) "<<endl;           
        }

    }

    return 0;
}
