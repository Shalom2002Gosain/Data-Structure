#include<iostream>
using namespace std;

int main(){
    char str[100];

    cout<<"Enter the Char : ";
    cin.getline(str,15);
    // cin.getline(str,100,'$'); // delim

    for(auto ch : str) {
        cout<< ch <<" ";
    }
    cout<<endl;

    

    return 0;
}