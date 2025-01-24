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

        int maximum = 0;
        for (auto it = counter.begin(); it!=counter.end(); it++){
            if (it->second > maximum){
                maximum = it->second;
            }
        }

        counter.clear();
        ss.str("");
        ss.clear();
        ss << s;
        while(ss>>word){
            counter[word]+=1;
            if (counter[word]==maximum){
                cout << word << " " << maximum << endl;
                break;
            }
        }
    }
    
    return 0;
}