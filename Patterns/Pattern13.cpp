#include<iostream>
using namespace std;

int main(){
    
    int n = 5;

    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            char ch = 'A' + row + col - 2;
            cout << row+col-1 <<" " ;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
} 