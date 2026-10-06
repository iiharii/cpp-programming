#include <iostream>
using namespace std;

static int val;
int set_val(int v){
    val = v;  // 변수 선언한 적 없으므로 global val = 4
    return val;
}

int main(){
    int val;
    val = -1;
    set_val(4);
    cout << val << endl;  // local val = -1
}