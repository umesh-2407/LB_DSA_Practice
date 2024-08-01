#include<iostream>
using namespace std;

int main(){
    
    int tr = 4;
    int tc = 4;

    int row = 1;
    while(row <= tr){
        int col = 1;
        while(col <= tc){
            cout << tc-col+1;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
} 