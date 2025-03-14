#include <bits/stdc++.h>
using namespace std;


string s, ss;
const int maxn = 300005;
int cache[maxn][4];

int recurtion(int i, int j){
    if (cache[i][j]!=-1) return cache[i][j];

    if (i==(int)s.size()) {
        cache[i][j] = (j == (int)ss.size()) ? 1 : 0;
        return cache[i][j];
    }

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
        memset(cache, -1, sizeof(cache));

        cin >> s;
        cin >> ss;
        
        cout << recurtion(0, 0)<< endl;
    }
    
    return 0;
}