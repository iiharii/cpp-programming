#include <iostream>
using namespace std;

int main(){
    int grade[5] = {30, 20, 10, 40, 50};
    int i, s;

    for (i=0; i<5; i++){
        cout << "번호" << i << ":";
        for(s=0; s<grade[i]; s++)
                cout << "*";
        cout << endl;
    }
    return 0;
}