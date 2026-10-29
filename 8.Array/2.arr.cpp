#include<iostream>
using namespace std;

int main(){
    // int marks[6] = {86,68,92,76,56,54};
    int size = 6;
    int marks[size];

    for(int i=0; i<size; i++) {
        cout<<"Enter the marks : ";
        cin >> marks[i];
    }
    cout<<endl;
    
    // Loops : 0 to Size-1

    for(int i=0; i<size; i++) {
        cout <<marks[i] << endl;
    }
    

    return 0;
}