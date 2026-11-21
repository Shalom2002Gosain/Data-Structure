#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int>p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}

int main(){
    vector<pair<int, int>> vec = {{3,1}, {2,1}, {7,1}, {5,2}};

    // int arr[5] = {6,2,4,1,5};
    // sort(arr, arr+5);
     
    sort(vec.begin(), vec.end(), comparator);

    for(auto p : vec) {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    return 0;
}