// 더 간단한 버전

#include <iostream>
using namespace std;

int main(){
    int n;
    int mul = 1;

    while(true){
        cin >> n;
        if(n>0){
            mul = (mul * n) % 10;
        }
        else if(n==0){
            cout << mul << endl;
            break;
        }
    }
    return 0;
}