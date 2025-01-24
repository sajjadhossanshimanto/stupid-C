#include <bits/stdc++.h>
using namespace std;


int main(){
    priority_queue<long long int, vector<long long int>, greater<long long int>> pq;

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
            cout << pq.top() << endl;
        }
        else if (op==1){
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if (op==2){
            if (!pq.empty()){
                pq.pop();
                if (!pq.empty())
                    cout << pq.top() << endl;
                else
                    cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }
    
    return 0;
}