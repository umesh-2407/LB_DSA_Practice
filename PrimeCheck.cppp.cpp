#include<iostream>
using namespace std;

int main(){
   
      int n;
      cin >> n;

      int i=2;
      while(i<n){
         if(n%i==0){
            cout << "not prime" << endl;
            break;
         }
         i++;
         if(n==i){
            cout<<"Prime"<<endl;
         }
      }





    return 0;
}