#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> q;

    q.push(86); // O(logn)
    q.push(56);
    q.push(90);
    q.push(68);
    
    while (!q.empty())
    {
        cout<<q.top() <<" ";
        q.pop();
    }
    cout<<endl;
    
    

    return 0;
}