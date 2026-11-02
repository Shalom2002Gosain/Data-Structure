// Find character lowercase or uppercase

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter char  : ";
    cin >>ch;

    // if(ch >= 'a' && ch <= 'z') {
    //     cout << " Lowercase\n";
    // } else {
    //     cout << " Uppercase\n";
    // }


// with ASCAI
    if(ch >= 65 && ch <= 90) {
        cout << " Uppercase\n";
    } else {
        cout << " lowercase\n";
    }
    
    

    return 0;
}