// find smallest value from Array

#include<iostream>
using namespace std;



int main(){
    int nums[] = {5,7,34,-19,86,72};
    int size =6;
   

    // int smallest = INT_MAX;

    int largest = INT_MIN;
    int index = -1;

    for(int i=0; i<size; i++) {
        if(nums[i] > largest) {
            largest = nums[i];
            index = i;
        }
        // smallest = min(nums[i], smallest);
    }

    cout<<"largest : "<<largest <<endl;
    cout<<"Index : "<<index <<endl;
    // cout<<"smallest : "<<smallest<<endl;

    return 0;
}