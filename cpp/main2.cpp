#include <iostream>
using namespace std;

void printValues(int a, int b ) {
    int x = a;
    int y = b;
    cout << "X-> " << x << " and Y-> " << y << endl;
}

void printValues(float a=2) {
    float x = a;
    cout << "X-> " << x << endl;
}

int main() {
    printValues(2, 4);
    printValues(4.4);
    return 0;
}
