#include <bits/stdc++.h>
using namespace std;


string s, ss;
const int maxn = 300005;
int cache[maxn][4];

int recurtion(int i, int j){
    if (j == 3) return 1;
    if (i == (int)s.size()) return 0;
    
    if (cache[i][j]!=-1) return cache[i][j];

    if (s[i]==ss[j]){
        cache[i][j] = recurtion(i+1, j+1)+recurtion(i+1, j);
    }
    else{
        cache[i][j] = recurtion(i+1, j);
    }

    return cache[i][j];
}

int main(){
    int t;
    cin >> t;

    while (t--){
        cin >> s;
        cin >> ss;


        for (int i = 0; i <= (int)s.size(); i++) {
            for (int j = 0; j <= 3; j++) {
                cache[i][j] = -1;
            }
        }
        
        cout << recurtion(0, 0)<< endl;
    }
    
    return 0;
}