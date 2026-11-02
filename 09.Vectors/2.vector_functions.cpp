#include<iostream>
#include<vector>
using namespace std;

int main(){
      vector<int>vec;
    // vector<char>vec = {'a','b','c','d','e'};
    cout<<"Size = "<<vec.size()<<endl;
// push back 
    vec.push_back(34);
    vec.push_back(44);
    vec.push_back(54);
    cout<<"After push_back = "<<vec.size()<<endl;

    // pop back

    vec.pop_back();
    cout<<"After pop_back = "<<vec.size()<<endl;

    // front
    cout<<"Front Value is : "<<vec.front()<<endl;
    
    // back
    cout<<"Back value is : "<<vec.back()<<endl;

    // for(int i : vec){ // for each loop

    //     cout <<i<<endl;
    // }

    return 0;



}