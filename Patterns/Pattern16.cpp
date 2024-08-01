#include<iostream>
using namespace std;

int main(){

    int n = 4;

    int row = 1;
    while(row <= n){
        int s = n-row;
        while(s){
            cout << "   " ;
            s--;
        }
        int col = 1;
        while(col <= row){
            cout << " * " ;
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}