#include <iostream>
using namespace std;

int main(){
    int x = -5;
    if(-9 <= x <= -1)  // -9 <= x && x <= -1  이렇게 써야 맞음. 
        cout << true << endl;
    else
        cout << false << endl;  // 실행돼서 0 출력
}

/*
-9 <= -5 는 True여서 1
1 <= -1 은 False여서 0
*/