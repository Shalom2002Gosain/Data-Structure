// <---- Type Casting ---->
// Converting data form one type tanother
// a. Conversion-Implicit(smmal-Big)
// b.Casting-Explicit(big-small)



#include<iostream>
using namespace std;

int main(){
// Type Conversion

    char grade = 'A'; // ASCAI value of A is 97
    int value = grade;
    cout<<"Type Conversion"<<endl;
    cout<<value<<endl;

// Type Casting
   
      double price = 100.99;

      int newPrice =(int)price;
      cout<<"Type Casting"<<endl;
      cout<<newPrice<<endl;

    

    return 0;
}