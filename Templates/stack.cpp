#include<iostream>
using namespace std;
template<class T1, int size>
class stack{
    T1 A[size];
    int top;
    public:
    stack(){
        top=-1;

    }

    void push(T1 data){
        if(top==size-1){
            cout<<"Stack is Full: "<<endl;

        }
        else{
            top++;
            A[top]=data;

        }

    }

    void pop();//pop-> declaration inside class defn outside class
     
};

template<class T1, int size>
void stack<T1, size>::pop(){
    if(top<0){
        cout<<"Stack is empty: "<<endl;

    }
    else{
        cout<<"The popped element is : "<<A[top]<<endl;

    }
    top--;

}

int main(){
    cout<<"Integer type stack : "<<endl;
    stack<int , 3> obj1;
    obj1.push(10);
    obj1.push(20);
    obj1.push(30);
    obj1.push(40);//stack full

    cout<<endl<<"Pop The element from the stack: "<<endl;
    obj1.pop();
    obj1.pop();
    obj1.pop();
    obj1.pop();//stack empty


}