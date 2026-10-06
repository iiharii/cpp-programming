// This is the beginning of main.cpp
#include <iostream>
using namespace std;

void set_ch(char *s, char ch = 'a', int pos = 0);

static char greeting[10] = "hello";
int main(){
    set_ch(greeting, '*', 1);  // main의 greeting을 넘김
    cout << greeting << endl;
}
// This is the end of main.cpp


// This is the beginning of sub.cpp
static char greeting[10] = "ciao";
void set_ch(char *s, char ch, int pos){  // 그러나 s를 사용하지 않고 있음.
    greeting[pos] = ch;   // sub.cpp의 greeting을 사용.
}
// This is the end of sub.cpp