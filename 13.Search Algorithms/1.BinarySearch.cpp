#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr, int tar) { // Iterative search
    int st = 0, end = arr.size()-1;

    while(st <= end) {
        // int mid = (st + end)/2;
        int mid = st + (st - end)/2; // optimization

        if(tar > arr[mid]) {
            st = mid + 1;
        } else if (tar < arr[mid]) {
            end = mid -1;
        } else {
            return mid;
        }
    }
    return -1;

}

int main(){
      vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // odd
      int tar1 = 12;

    //   cout<< BinarySearch(arr1,tar1)<<endl;
    
      vector<int> arr2 = {-1, 0, 3, 4, 5, 9, 12};
      int tar2 = 0; 
      cout<< BinarySearch(arr2,tar2)<<endl;

    return 0;
}