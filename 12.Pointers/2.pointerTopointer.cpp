#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a = 34;

    int* ptr = &a;
    int** p_ptr = &ptr;

    cout<<&ptr<<endl;
    cout<<p_ptr<<endl;
    cout<<&p_ptr<<endl;
    

    return 0;
}