#include <iostream>
using namespace std;

int main(){
    int i = 97;
    int *p;

    // p = 0x7fffffffde50;
    p = &i;
    
    int *q = &i;

    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    cout << "sizeof(p) is " << sizeof(p) << endl;
    cout << "sizeof(int*) is " << sizeof(int*) << endl;
}