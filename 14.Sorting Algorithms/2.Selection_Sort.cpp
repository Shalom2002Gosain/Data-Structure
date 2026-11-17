#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int n) { // O(n^2)
    for(int i=0; i<n-1; i++) {
        int smallestIndex = i; // unsorted par starting
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[smallestIndex]) {
                smallestIndex = j;
            }
        } 

        swap(arr[i], arr[smallestIndex]);

    }
}

int main(){
    int n =5;
    int arr[] = {5,2,4,3,1};

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}