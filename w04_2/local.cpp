#include <iostream>
using namespace std;

int inc(int counter);

int main(){
    int i;
    i = 10;
    cout << "함수 호출 전 i=" << i << endl;  // 10
    
    inc(i);                                // i값을 다른 메모리 공간에 복사해서 사용. return값 받지 않으므로 i는 그대로 10
    cout << "함수 호출 후 i=" << i << endl;  // 10
    return 0;
}

int inc(int counter){
    counter ++;
    return counter;
}