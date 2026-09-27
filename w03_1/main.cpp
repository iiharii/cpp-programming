#include <iostream>
using namespace std;

int main(){
    int i=10, j;
    int *p;

    p = &i;  // i의 주소 담김  
    j = *p;  // j = 10(=i)
    *p = 20;  // i = 20, j = 10
}