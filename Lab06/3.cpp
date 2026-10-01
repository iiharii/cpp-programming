#include <iostream>
using namespace std;

int main(){
    char x,y,z;
    x = 'a';
    y = 'b';
    z = 'e';

    if (((x++)=='a') || ((y++)=='b'))  // x를 먼저 비교 한 후, x+1 = 'b'. OR 앞부분이 이미 True -> 뒤 조건은 안 봄. 실행 X
        z = 'c';
    cout << x << ',' << y << ',' << z << endl;
}