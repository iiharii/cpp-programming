#include <iostream>
using namespace std;

int main(){
    const int size = 4;
    unsigned int v;
    unsigned char arr[size*4];  
    
    for (int i=0; i<size*4; i++){   // 16개의 1B 데이터 저장
        cin >> hex >> v;  // v를 16진수로 해석
        arr[i] = v;
    }

    float *ptr;  // float을 가리킬 pointer 선언
    
    ptr = (float*)arr;  // arr의 메모리를 float 단위로 보도록 함

    for (int i=0; i<size; i++){
        cout << ptr[i] << endl;   // 4B씩 float으로 출력
    }

    return 0;
}