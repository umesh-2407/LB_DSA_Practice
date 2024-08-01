#include<iostream>
using namespace std;

int main(){
    
    int tr = 3;
    int tc = 3;

    int row = 1;
    while(row <= tr){
        int col = 1;
        while(col <= tc){
            cout << col ;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
} 