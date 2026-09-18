#include <iostream>
using namespace std;

int main(){
    cout << "print \"a\\\"b\" :" << "a\"b" << endl;
    cout << "print \'\\\' :" << '\'' << endl;
    cout << "print \"a\\\\n\\n\" :" << "a\\n\n" << endl;

    char ch = 97;
    cout << "print 97 as a char: " << ch << endl;

    ch = '\141';
    cout << "print \'141\' as a char: " << ch << endl;
}