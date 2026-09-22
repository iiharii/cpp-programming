#include <iostream>
using namespace std;

int main(){
    int i=10, j;
    int *p;

    p = &i;
    j = *p;
    *p = 20;
}