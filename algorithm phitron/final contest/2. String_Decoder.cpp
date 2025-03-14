#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    int t;
    cin >> t;

    while (t--){
        cin >> s;
        // for(char a: s){
        //     cout << (int)a << " ";
        // }
        int i=1;
        while (i<(int)s.size()){
            for (int c=0; c<s[i]-'0'; c++){
                cout << s[i-1];
            }
            i+=2;
        }
        cout << endl;

        // break;
    }
    
    return 0;
}