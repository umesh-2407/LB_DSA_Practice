#include<iostream>
using namespace std;

int main(){
    
   char a;
   cout << "Enter No. : ";
   cin >> a ;

 

   if(a>= 'a' && a<= 'z'){
    cout << "a-z" <<endl;
   }

   else if(a>= 'A' && a<= 'Z'){
    cout << "A-Z" <<endl;
   }

    else if(a>= '0' && a<= '9'){
    cout << "0-9" <<endl;
   }

   else{
    cout<<"other"<<endl;
   }
    return 0;
}