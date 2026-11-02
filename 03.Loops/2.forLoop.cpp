#include<iostream>
using namespace std;

int main(){
    int n = 20;
    int sum = 0;

    // for( int i =1; i <= n; i++){
    //     cout <<i << " ";
    // }
    // cout <<endl;

    for(int i=1; i<=n; i++) {
        sum += i;
        if(i == 7){
            break;
        }
    }

    cout << "Sum = " << sum <<endl;


    return 0;
}