#include<iostream>
#include<vector>
using namespace std;

int main(){
   int a = 486;
   int *p = &a;
   int** q = &p;

   cout<<*p<<endl;
   cout<<**q<<endl;

   
   
   cout<<p<<endl;
   cout<<*q<<endl;
   cout<<&a<<endl;
    

    return 0;
}