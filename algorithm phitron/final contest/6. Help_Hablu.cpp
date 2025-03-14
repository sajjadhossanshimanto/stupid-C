#include <bits/stdc++.h>
using namespace std;


string s, ss;

int recurtion(int i, int j){
    if (i==(int)s.size()) {
        return (j == (int)ss.size()) ? 1 : 0;
    }

    if (s[i]==ss[j]){
        return recurtion(i+1, j+1)+recurtion(i+1, j);
    }
    else{
        return recurtion(i+1, j);
    }
}

int main(){
    int t;
    cin >> t;

    while (t--){
        cin >> s;
        cin >> ss;
        
        cout << recurtion(0, 0)<< endl;
    }
    
    return 0;
}