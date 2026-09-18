#include <iostream>
using namespace std;

int main(){
    int number = 2;

    switch(number){
    case 0:
        cout << "없음\n";
        break;
    case 1:
        cout << "하나\n";
        break;
    case 2:  // break 생략하면 case 2 or case 3 조건
    case 3:
        cout << "두서너개\n";
        break;
    default:
        cout << "많음\n";
        break;
    }
}