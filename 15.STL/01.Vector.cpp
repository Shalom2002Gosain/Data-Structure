#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,4,2,5,3,6,76,86,68};
    
    
    // vec.clear();
    // vec.insert(vec.begin() + 2, 100);
    // vec.erase(vec.begin() + 1, vec.begin() + 6);

    // vec.erase(vec.begin() + 1);




    // vector<int> vec2(vec1);




    // vector<int> vec(10, -1); // Dynamic Programming - tabulation DP[] []
    // vector<int> vec; // 0
    // vec.push_back(1);
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.emplace_back(86);
    // vec.pop_back();


    // for(int val:vec) {
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    // cout<<"front : " <<vec.front()<<endl;

    // cout<<"back : " <<vec.back()<<endl;

 
    // cout<<"Val at idx 2 : "<<vec[2] <<" or " <<vec.at(2)<<endl;

    // cout<<"Size : "<<vec.size()<<endl; //3
    // cout<<"Capacity : "<<vec.capacity()<<endl; //4
    // cout<<"Empty : "<<vec.empty()<<endl; //4

// Itrators    
//    vector<int>::iterator it;
   for( auto it = vec.rbegin(); it != vec.rend(); it++) {
    cout<<*(it)<<" ";
   }
   cout<<endl;

    // cout<<"Vec.Beign : "<<*(vec.begin())<<endl;
    // cout<<"Vec.End : "<<*(vec.end())<<endl;

    return 0;
}