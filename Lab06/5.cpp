#include <iostream>
using namespace std;

int main(){
    double arr[3];

    cout << &arr[10] - arr << endl; // 몇 칸 떨어져 있는지 계산
}

// arr == &arr[0]