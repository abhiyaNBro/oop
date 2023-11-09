// All in one File:

#include<iostream>
using namespace std;
#include<fstream>
#include<string>

class Student{
    private:
    int roll;
    char name[20];
    public:

    void getdata()
    {
        cout<<"Enter you name: "<<endl;
        cin>>name;
        cout<<"Enter your Roll no: "<<endl;
        cin>>roll;

    }

    void showdata(){
        cout<<"Your name is : "<<name<<endl;
        cout<<"Your roll is : "<<roll<<endl;

    }

    int check(int r){
        if(r==roll){
            return 1;

        }
        else
        return 0;
    }
};

void addrecords(){
    fstream fout;
    Student s;

    s.getdata();
    fout.open("database.txt", ios::out | ios::app | ios::binary);
    fout.write((char*)&s, sizeof(s));
    fout.close();
}   

void displaydata(){
    fstream fin;
    Student s;

    fin.open("database.txt", ios::in | ios::binary );
    while(fin.read((char*)&s, sizeof(s))){
        s.showdata();

    }
}  

void search(){
 fstream fin;
 Student s;

 int r;
 int flag=0;

 cout<<"Enter the roll no to be searched: "<<endl;
 cin>>r;

 fin.open("database.txt", ios::in | ios::binary);
 while(fin.read((char*)&s,sizeof(s))){
    if(s.check(r)){
        s.showdata();
        flag=1;
        break;
    }
 }
    
 if(flag==0){
    cout<<"User not found!"<<endl;

 }
}

void deletef(){
    fstream fin, fout;
    Student s;

    int roll, flag=0;

    cout<<"Enter the roll no to be deleted:"<<endl;
    cin>>roll;

    fin.open("database.txt", ios::in | ios::binary);
    fout.open("temp.txt", ios::out | ios::binary);

    while(fin.read((char*)&s, sizeof(s))){
        if(s.check(roll)){
            flag=1;

        }
        else{
            fout.write((char*)&s, sizeof(s));

        }

    }

    if(flag==0){
        cout<<"User not found!"<<endl;

    }
    else{
        cout<<"User deleted! "<<endl;
    }

    fin.close();
    fout.close();

    remove("database.txt");
    rename("temp.txt", "database.txt");

}

int main(){
    int x;
    bool X= true;
    while(X){
        cout<<"1. Add record "<<endl;
        cout<<"2. Display all records "<<endl;
        cout<<"3. Search specific record "<<endl;
        cout<<"4. Delete Record "<<endl;
        cout<<"5. Exit "<<endl;

        cout<<endl<<"Choose: "<<endl;
        cin>>x;

        switch(x){
            case 1: 
            addrecords();
            break;

            case 2:
            displaydata();
            break;

            case 3:
            search();
            break;

            case 4:
            deletef();
            break;

            case 5:
            X=false;
            break;
            
            default:
            cout<<"Enter 1-4"<<endl;

        }
    }

    return 0;
}