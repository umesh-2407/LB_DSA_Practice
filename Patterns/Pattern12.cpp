#include<iostream>
using namespace std;

int main(){
    
    int n = 5;

    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            char ch = 'A' + row - 1;
            cout << ch <<" " ;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
} 