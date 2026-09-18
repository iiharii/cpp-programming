#include <iostream>
using namespace std;

int main(){
    int n, m;
    int numbers[100][100];
    char symbols[100];

    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> numbers[i][j];
        }
    }
    
    for(int i=0; i<m; i++){
        cin >> symbols[i];
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << symbols[numbers[i][j]];
        }
        cout << endl;
    }
    return 0;
}