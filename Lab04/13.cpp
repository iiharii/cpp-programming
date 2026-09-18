#include <iostream>
using namespace std;

int main(){
    char ch = 'a';
    switch(ch){
        case 'a':
            cout << "A\n";  // break이 없음
        case 'b':
            cout << "B\n";  
        default:
            cout << "not A or B\n";
    }
}

/*
일단 일치하는 case를 찾아 실행이 시작되면, 
그 이후에는 case의 값이 무엇인지는 신경 쓰지 않고 아래로 계속 실행
*/