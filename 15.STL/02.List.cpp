#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(68);
    l.push_front(86);

    for(int val : l) {
        cout<<val <<" ";
    }
    cout<<endl;

    

    return 0;
}