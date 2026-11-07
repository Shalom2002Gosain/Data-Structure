// Derefrence

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a = 487;
    
    int* ptr = &a;
    int** p_ptr = &ptr;

    cout<<*(p_ptr)<<endl;
    cout<<**(p_ptr)<<endl;
    cout<<(ptr)<<endl;
    

    return 0;
}