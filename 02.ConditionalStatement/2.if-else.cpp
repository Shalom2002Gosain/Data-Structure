#include<iostream>
using namespace std;

int main(){
    int age;
    cout <<"Enter your Age : ";
    cin >> age;

    if (age >= 18){
        cout<<"You can give vote\n";
    
    }
    else {
        cout <<"You are not elligible\n";
    }
 
    

    return 0;
}