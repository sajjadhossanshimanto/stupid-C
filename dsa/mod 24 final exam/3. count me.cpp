#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s, word;
        getline(cin, s);

        stringstream ss(s);

        map<string, int> counter;
        while(ss>>word){
            counter[word]+=1;
        }

        pair<string, int> maximum = {"", 0};
        for (auto it = counter.begin(); it!=counter.end(); it++){
            if (it->second > maximum.second){
                maximum = make_pair(it->first, it->second);
            }
        }

        cout << maximum.first << " " << maximum.second << endl;
    }
    
    return 0;
}