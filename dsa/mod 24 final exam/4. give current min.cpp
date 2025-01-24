#include <bits/stdc++.h>
using namespace std;


int main(){
    priority_queue<int, vector<int>, greater<int>> pq;

    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        pq.push(x);
    }

    cin >> n;
    while (n--){
        int op;
        cin >> op;
        if (op==0){
            int val;
            cin >> val;
            pq.push(val);
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if (op==1){
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if (op==2){
            pq.pop();
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
    }
    
    return 0;
}