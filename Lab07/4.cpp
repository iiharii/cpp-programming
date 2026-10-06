// This is the beginning of main.cpp
#include <iostream>
using namespace std;

void set_ch(char ch='a', int pos=0);  // (1)
extern char greeting[10] = "hello";   // (2) extern인데 초깃값 선언 (compile error)

int main(){
    set_ch('*', 1);                    // (3) 함수가 static이라 (link error)
    cout << greeting << endl;          // (4) hello
}
// This is the end of main.cpp


// This is the beginning of sub.cpp
char greeting[10] = "ciao";       // (5) 외부 연결을 가진 같은 이름의 global 변수가 됨(link error)

static void set_ch(char ch, int pos){  // (6) static은 여기서만 사용할 수 있는 함수.
    greeting[pos] = ch;                // (7)
}
// This is the end of sub.cpp