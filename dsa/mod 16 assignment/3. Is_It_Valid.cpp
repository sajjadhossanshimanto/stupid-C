#include <bits/stdc++.h>
using namespace std;


int main(){
    int q;
    cin >>q;
    while (q--){
        string x;
        vector<int> v;
        cin >> x;

        for (auto i: x){
            if (v.empty() || i==v.back()){
                v.push_back(i);
            }
            else{
                v.pop_back();
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