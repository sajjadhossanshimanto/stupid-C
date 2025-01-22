#include <bits/stdc++.h>
using namespace std;


int main(){
    priority_queue<int> q;// max heap
    // priority_queue<int, vector<int>, greater<int>> q;// min heap

    q.push(10);
    q.push(5);
    q.push(30);
    cout << q.top() << endl;
    q.push(200);
    cout << q.top() << endl;
    q.pop();// 200
    q.pop();// 30
    cout << q.top() << endl;
    
    
    return 0;
}