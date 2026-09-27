#include <iostream>
using namespace std;

int main(){
    int i = 97;
    int *p;

    // p = 0x7fffffffde50; // compile error! (*p: int* type, 0x7fffffffde50: int literal -> type 불일치)
    p = &i;
    
    int *q = &i;

    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    cout << "sizeof(p) is " << sizeof(p) << endl;
    cout << "sizeof(int*) is " << sizeof(int*) << endl;

    cout << "i = " << i << endl;
    cout << "*p = " << *p << endl;
    cout << "*q = " << *q << endl;
    cout << "&i = " << &i << endl;

    char c = 'a';

    char *ptr;

    ptr = &c;

    cout << "sizeof*(char *) is " << sizeof(char *) << endl;
}