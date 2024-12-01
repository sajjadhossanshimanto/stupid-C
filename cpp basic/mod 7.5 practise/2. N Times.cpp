# include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n;
        char c;
        cin >> n >> c;

        string s;
        for (int i=0; i<n; i++){
            s += c;
            s += ' ';
        }
        cout << s << endl;

    }
    return 0;
}