#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> m; // O(logn)

    m["Shalom"] = 486;
    m["Shivdeep"] = 487;
    m["Sujal"] = 492;
    m["yash"] = 500;
    m["Sahil"] = 483;

    m.emplace("Joban", 707);
    m.erase("Sahil");

    for(auto p :m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<"Count : "<<m.count("Joban")<<endl;

    
// Map sort the data in ascending order
    return 0;
}