#include<iostream>
#include<vector>
using namespace std;

// void changeA(int *ptr) { // pass by reference using pointers
//     *ptr = 45;
// }

void changeA(int &b) { // pass by reference using alias
    b = 45;
}

int main(){
    int a = 55;
    // changeA(&a);
    changeA(a);

    cout <<"Inside the main Fun : "<<a<<endl; //45
    

    return 0;
}