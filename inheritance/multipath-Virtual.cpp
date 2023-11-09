#include<iostream>
#include<string>
using namespace std;

class Student{
    protected:
    string name;
    int roll;
    public:
    void getSudent(){
        cout<<"Enter the name and roll of Student: "<<endl;
        cin>>name>>roll;
        
    }

    void showStudent(){
        cout<<"Name: "<<name<<endl<<"Roll: "<<roll<<endl;

    }
};

class Test: virtual public Student{ //to remove ambiguity by passing only one copy to the final derived calss.
    protected:
    int sub1, sub2;
    public:
    void getMark(){
        cout<<"Enter the marks obtained in 2 subject: "<<endl;
        cin>>sub1>>sub2;

    }

    void showMark(){
        cout<<"Mark1: "<<sub1<<endl<<"Mark2: "<<sub2<<endl;

    }
};

class Sports:virtual public Student{
    protected:
    int score;
    public:
    void getScore(){
        cout<<"Enter the score obtained in Sports: "<<endl;
        cin>>score;

    }

    void showScore(){
        cout<<"Score: "<<score<<endl;
    }
};

class Result: public Test, public Sports{
    protected:
    int total;

    public:

    void display(){
        showStudent(); //virtual narakhya bhaye, yo ambigious hunthiyo cause, student bata 2ta class derive bhako xa, test ra sports ra yeni haru dubai sanga showStudent bhanne function pani inherit hunxa. so aba derived calss bata call garda, kun chai base class ko showStudent lai call gareko bhanne kura ambigious hunxa.
        showMark();
        showScore();
        cout<<"The total mark is : "<<sub1+sub2+score<<endl;

    }
};

int main(){
    Result R;

    R.getSudent(); //virtual narakhya bhaye, yo pani ambigious hunthiyo
    R.getMark();
    R.getScore();

    R.display();

    return 0;

}