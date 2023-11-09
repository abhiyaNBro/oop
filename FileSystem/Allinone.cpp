#include<iostream>
#include<fstream>
using namespace std;
#include<string>


// output mode -> write garne...input mode -> read garne.

class Student{
    char name[50], faculty[20];
    int age, roll;
    public:

    void getData(){
        cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Enter your faculty: "<<endl;
        cin>>faculty;
        cout<<"Enter your age: "<<endl;
        cin>>age;
        cout<<"Enter your roll: "<<endl;
        cin>>roll;
    }

    void displayData(){
        cout<<endl;
        cout<<"---------YOUR DETAILS---------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Faculty: "<<faculty<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll: "<<roll<<endl;

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

void addRecords(){
    Student s;
    fstream fout;

    s.getData();
    fout.open("data.txt", ios::app | ios::out | ios::binary);
    fout.write((char*)&s, sizeof(s));
    fout.close();
}

void displayRecords(){
    Student s;
    fstream fin;

    
    fin.open("data.txt", ios::in | ios::binary);
    while(fin.read((char*)&s, sizeof(s))){
        s.displayData();
    }

    fin.close();
    
}

//search in file

void Search(){
    fstream fout;
    Student s;
    int roll;
    int flag=0;

    cout<<"Enter the roll number to be searched: "<<endl;
    cin>>roll;
    fout.open("data.txt", ios::in | ios::binary); 
    while(fout.read((char*)&s,sizeof(s))){
        if(s.check(roll)){
            s.displayData();
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"No records found!!"<<endl;
    }

}

//Delete record:

void deleteRecord(){
    fstream fin, fout;
    Student s;
    int roll, flag=0;
    cout<<"Enter the roll no to be deleted: "<<endl;
    cin>>roll;

    fin.open("data.txt", ios::in | ios:: binary);
    fout.open("temp.txt", ios::out | ios::binary);

    while(fin.read((char*)&s, sizeof(s))){
        if(s.check(roll)){
            flag=1;
        }
        else{
            fout.write((char*)&s,sizeof(s));
        }
    }

    if(flag==0){
        cout<<"\nNot Found"<<endl;
    }
    else{
        cout<<"\nRecord Deleted"<<endl;
    }

    fout.close();
    fin.close();
    remove("data.txt");
    rename("temp.txt", "data.txt");
}

int main(){
    int n;
    bool x=true;

   while(x){
    cout<<endl;
    cout<<"1. ADD RECORDS"<<endl;
    cout<<"2. DISPLAY RECORDS"<<endl;
    cout<<"3. SEARCH"<<endl;
    cout<<"4. DELETE RECORD"<<endl;
    cout<<"5. EXIT"<<endl;
    cout<<endl;

    cout<<"What you you want? "<<endl;
    cin>>n;

    cout<<endl;
    switch(n){
        case 1: 
        addRecords();
        break;
        
        case 2:
        displayRecords();
        break;

        case 3: 
        Search();
        break;

        case 4:
        deleteRecord();
        break;
        
        case 5:
        x=false;
        break;

        default:
        cout<<"Please choose valid option"<<endl;

    }

   }

   return 0;
}