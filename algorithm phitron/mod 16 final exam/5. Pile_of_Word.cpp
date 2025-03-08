#include <bits/stdc++.h>
using namespace std;


void frequency(string s, map<char, int> &freq_map) {
    for (char ch : s) {
        freq_map[ch]++;
    }
}

void print_map(const map<char, int> &freq_map) {
    for (const auto &pair : freq_map) {
        cout << pair.first << " -> " << pair.second << endl;
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        string s1, s2;
        map<char, int> fs1, fs2;
        cin >> s1 >> s2;

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