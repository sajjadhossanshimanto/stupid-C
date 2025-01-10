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
            if (i=='0'){
                v.push(i);
            }
            else{// i is 1
                if (v.size() && v.top()!=i){
                    v.pop();
                }
                else{
                    v.push(i);
                }
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