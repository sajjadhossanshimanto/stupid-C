#include <bits/stdc++.h>
using namespace std;


void frequency(string s1, map<string, int> &fs1){
    for (int i=0; i<(int)s1.size(); i++){
        fs1[s1[i]] += 1;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        string s1, s2;
        map<string, int> fs1, fs2;

        frequency(s1, fs1);
        frequency(s2, fs2);

        for (auto it = fs1.begin(); it!=fs1.end(); it++){
            if (fs2[(*it).first] != (*it).second){
                cout << "NO" << endl;
                continue;
            }
        }
        cout << "YES" << endl;

    }
    
    return 0;
}