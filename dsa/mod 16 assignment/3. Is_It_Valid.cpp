#include <bits/stdc++.h>
using namespace std;


int main(){
    int q;
    cin >>q;
    while (q--){
        string x;
        stack<int> v;
        cin >> x;

        for (auto i: x){
            if (v.empty() || i==v.top()){
                v.push(i);
            }
            else{
                v.pop();
            }
        }

        if (v.size()==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}