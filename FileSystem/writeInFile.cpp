//WAP to store details of book(id, author, price) in a file and display the stored information of the file.

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Book{
    int id;
    string author;
    float price;

    public:

    void getData(){
        cout<<"Enter the id of the Book: "<<endl;
        cin>>id;
        cout<<"Enter the name of author: "<<endl;
        cin>>author;
        cout<<"Enter the price: "<<endl;
        cin>>price;
    }

    void displayData(){
        cout<<"ID -> "<<id<<endl;
        cout<<"Author -> "<<author<<endl;
        cout<<"Price -> "<<price<<endl;

    }
};

void addRecords(){
    fstream fout;
    Book b;

    cout<<"Enter the book record: "<<endl;

    b.getData();
    fout.open("Book.txt", ios::app | ios::out | ios::binary);
    fout.write((char*)&b, sizeof(b));
    fout.close();
    
}

void showRecords(){
    fstream fin;
    Book b;

    fin.open("Book.txt", ios::in | ios:: binary);
    while (fin.read((char*)&b, sizeof(b))){
        b.displayData();
    }
}

int main(){
    addRecords();
    cout<<"The records are: "<<endl;
    
    showRecords();
    
    return 0;

}