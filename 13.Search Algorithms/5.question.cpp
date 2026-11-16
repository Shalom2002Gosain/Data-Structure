// Aggressive Cows Problem

#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int N, int C, int minAllowed) { // O(N)
    int cows = 1,  lasStallPos = arr[0];

    for(int i=1; i<N; i++) {
        if(arr[i]-lasStallPos >= minAllowed) {
            cows++;
            lasStallPos = arr[i];
        }

        if(cows == C) {
            return true;
        }
    }
    return false;
     
}



int getDistance(vector<int> arr, int N, int C) {
    sort(arr.begin(), arr.end()); // NlogN
    // st = 1, end = maxVal-minval

    int st = 1, end = arr[N-1]-arr[0], ans = -1;

    while(st <= end) { // O(log(range) * N)
        int mid = st + (end-st) /2;

        if(isPossible(arr, N, C, mid)) { // Right
            st = mid+1; 
            ans = mid;
        } else{ // left
            end = mid-1;
        }
          
        
    }
    return ans;

}

int main(){
    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};
    
    cout<< getDistance(arr, N, C) << endl;

    return 0;
}