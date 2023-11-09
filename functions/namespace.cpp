#include<iostream>
using namespace std;

namespace data{
    int x,y;

}

namespace fxn{
    using namespace data;
    void add(){

        cout<<"The sum is : "<<x+y<<endl;
    }

    void product(){
        cout<<"The product is :"<<x*y<<endl;
    }
}

int main(){
    using namespace data;
    x=10;
    y=20;

    using namespace fxn;

    add();
    product();

    return 0;
    
}