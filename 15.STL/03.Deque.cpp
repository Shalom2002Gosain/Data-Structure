// Deque : Double Ended Queue

#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d = {2,4,6,8,3,5};
    d.emplace_back(86);

    for(int val : d){
        cout<<val<<" ";
    }
    cout<<endl;

    

    return 0;
}