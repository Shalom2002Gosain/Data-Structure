// Kadane's Algorithm

// leetcode # 53. Maximum Subarray

#include<iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    int n =7;
    int arr[7] = {3,-4,5,4,-1,7,-8};

    int c_sum = 0 , maxSum = INT_MIN;

    for(int i=0; i<n; i++) {
        c_sum += arr[i];
        maxSum = max(c_sum, maxSum);
        if(c_sum<0){
            c_sum = 0;
        }
    }

     cout << "Maximum Subarray Sum: " << maxSum << endl;

    return 0;
}