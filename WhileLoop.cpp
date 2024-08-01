#include<iostream>
using namespace std;

int main(){
    
   int n,sum=0;
   cout << "Enter No. : ";
   cin >> n ;

int i = 1;

  while(i<=n){
    if(i%2==0){sum+=i;}
   
   i++;
  } 
   cout <<"Sum : "<< sum <<endl; 
  
    return 0;
  }