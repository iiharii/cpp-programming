#include <iostream>
using namespace std;

#define CONST1 97
int main(){
    char c=97;
    char a[10] = "abcde";
    char aa[10] = {'a', '\141', '\x61', 0141, 0x61};
    int i=97;
    const int CONST2=97;
    float f = 1234567890.12345678901234567890;
    double d = 1234567890.12345678901234567890;
    long double ld0 = 1234567890.12345678901234567890;
    long double ld = 1234567890.12345678901234567890L;

    cout << "sizeof(\'a\') is " << sizeof('a') << endl;
    cout << cout << "sizeof(\'\\141\') is " << sizeof('\141') << endl;
    
}