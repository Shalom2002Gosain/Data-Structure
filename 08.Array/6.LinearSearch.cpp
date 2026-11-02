#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i =0; i<size; i++) { 
        if(arr[i] == target) { // Found
            return i;
        }
    }
    return -1; // Not Found
}

int main(){
    int arr[] = {2, 5 , 7, 65, 8, 3, 4};
    int size = 7;
    int target = 9;

    cout <<linearSearch(arr,size,target) <<endl;
    

    return 0;
}

// Time Complexity ---> O(n)