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
        map<string, int> index;
        int c=0;
        while(ss>>word){
            counter[word]+=1;
            if (!index.count(word)){
                index[word] = c;
            }
            c++;
        }

        pair<string, int> maximum = {"", 0};
        for (auto it = counter.begin(); it!=counter.end(); it++){
            if (it->second == maximum.second){
                if (index[it->first] < index[maximum.first]){
                    maximum = make_pair(it->first, it->second);
                }
            }
            else if (it->second > maximum.second){
                maximum = make_pair(it->first, it->second);
            }
        }

        cout << maximum.first << " " << maximum.second << endl;
    }
    
    return 0;
}