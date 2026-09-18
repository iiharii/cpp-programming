#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<4; i++){
        if(i%2) continue;    // 0 이면 False, 나머지는 True
        else cout << i << endl;
    }
}