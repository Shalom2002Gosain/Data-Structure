#include<iostream>
#include<vector>
using namespace std;

int main(){
//    int a = 98;
//    int* ptr = &a;

//    cout<<ptr<<endl;
//    ptr++;
//    cout<<ptr<<endl; //4
//    ptr--;
//    cout<<ptr<<endl;

int arr[] = {1, 2, 3, 4, 5};

// cout<<*arr<<endl; // 1
// cout<<*(arr+1)<<endl; // 2
// cout<<*(arr+2)<<endl; // 3
// cout<<*(arr+3)<<endl; // 4

// subtract 2 pointers

int *ptr2; // 100
int *ptr1 = ptr2 + 2; // 108

cout<<ptr1 - ptr2<<endl; //2


    

    return 0;
}