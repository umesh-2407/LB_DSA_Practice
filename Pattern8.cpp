#include<iostream>
using namespace std;

int main(){
    
    int n = 5;
    int c = 1;
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            cout << c << " " ;
            c++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
} 