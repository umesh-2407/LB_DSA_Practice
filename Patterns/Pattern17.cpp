#include<iostream>
using namespace std;

int main(){

    int n = 4;

    int row = 1;
    while(row <= n){
        int col = n-row+1;
        while(col){
            cout << " * " ;
            col--;
        }
        cout << endl;
        row++;
    }

    return 0;
}