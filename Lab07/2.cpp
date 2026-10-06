// This is the beginning of main.cpp
#include <iostream>
using namespace std;

void set_ch(char ch = 'a', int pos = 0);

static char greeting[10] = "hello";
int main(){
    set_ch('*', 1);
    cout << greeting << endl;  // main의 greeting은 변화 없음
}
// This is the end of main.cpp


// This is the beginning of sub.cpp
static char greeting[10] = "ciao";
void set_ch(char ch, int pos){
    greeting[pos] = ch;  // sub.cpp의 greeting={c,*,a,o}
}
// This is the end of sub.cpp