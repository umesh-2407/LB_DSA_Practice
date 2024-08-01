#include<iostream>
using namespace std;

int main(){
    
    int tr = 5;
    int tc = 5;

    int row = 1;
    int n=1;
    while(row <= tr){
        int col = 1;
        while(col <= tc){
            cout << n << " ";
            col++;
            n++;
        }
        cout << endl;
        row++;
    }
    return 0;
} 