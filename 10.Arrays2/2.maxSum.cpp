#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int maxSum = INT_MIN;
    for(int st=0; st<n; st++) {
        int c_sum = 0;
        for(int end=0; end<=st; end++) {
            c_sum += arr[end];
            maxSum = max(c_sum,maxSum);

        }
    }

    cout<<" Max subarray sum : "<<maxSum<< endl;
    

    return 0;
}