// Sum of all Odd numbers from 1 to n

#include<iostream>
using namespace std;

int main(){
    // int n = 10;
    // int oddSum = 0;

    // for(int i=1; i<=n; i++){
    //     if(i%2 != 0){
    //         oddSum += i;
    //     }

    // }
    // cout << "Sum of Odd no : " << oddSum<<endl;

// <---- Using while loop ---->

int n = 10;
int oddSum = 0;
int i = 1;
while(i <= n){
    if(i%2 != 0){
        oddSum += i;
    }
    i++;
}
  cout << "Sum of Odd no : " << oddSum<<endl;

    return 0;
}