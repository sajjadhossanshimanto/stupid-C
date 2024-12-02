#include <bits/stdc++.h>
using namespace std;

bool match(string s, string ss, int start, int end){
    for (int i=start; i<end; i++){
        if (s[i]!=ss[i-start]) return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t){
        string s, ss;
        cin >> s >> ss;
        int n = s.length();
        int m = ss.length();

        string refined;
        int pointer = 0;
        while (pointer<n){
            if (match(s, ss, pointer, pointer+m)){
                pointer+=m;
                refined += "#";
            }
            else{
                refined+=s[pointer];
                pointer++;
            }
        }

        cout << refined << endl;
        t--;
    }
    return 0;
}