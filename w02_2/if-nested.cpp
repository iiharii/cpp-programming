#include <iostream>
using namespace std;

int main(){
    int score = 98;

    if (score > 80){
        if (score > 90)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
    else{
        if (score > 70)
            cout << "C" << endl;
        else
            cout << "D" << endl;
    }
    return 0;
}