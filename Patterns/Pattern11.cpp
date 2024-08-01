#include<iostream>
using namespace std;

int main(){
    
    int n = 5;
    char start='A';

    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            cout << start;
            col++;
        }
        cout << endl;
        start++;
        row++;
    }
    return 0;
} 