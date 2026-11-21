#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(486);
    q.push(487);
    q.push(492);
    q.push(500);
    q.push(707);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    

    return 0;
}