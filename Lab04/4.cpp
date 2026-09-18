#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<4; i++){
        if (i%2) continue;
        else cout << i << endl;
    }
    cout << i << endl;  // i는 for문 안에서 선언된 변수로, 그 안에서만 존재

}