#include<iostream>
using namespace std;

int main(){
    
    int n = 5;

    int row = 1;
    while(row <= n){
        int col = 1;
        int x = row;
        while(col <= row){
            cout << x <<" " ;
            x--;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
} 