#include<iostream>
using namespace std;

int main(){
    // pair<string, int> p = {"Shalom", 8};
    pair<int, pair<char,int>> p = {86, {'A',68}};
    
    cout<<p.first<<endl;
    cout<<p.second.first<<endl;

    

    return 0;
}