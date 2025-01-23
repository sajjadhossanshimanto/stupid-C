#include <bits/stdc++.h>
using namespace std;


int main(){
    string s = "i love football. i love video games. i love ...";
    
    stringstream ss(s);
    string word;

    map<string, int> counter;
    while (ss>>word){
        counter[word]+=1;
    }


    cout << counter["i"] << endl;
    // // print all
    // for (auto it = counter.begin(); it!=counter.end(); it++){
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    return 0;
}