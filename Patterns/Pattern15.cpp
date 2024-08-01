#include<iostream>
using namespace std;

int main(){

    int n = 5;
    char s = 'A';

    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            cout << s++ ;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}