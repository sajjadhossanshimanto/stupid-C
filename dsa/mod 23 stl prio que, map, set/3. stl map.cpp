#include <bits/stdc++.h>
using namespace std;

/*
tc: 
logn -> for a single value insertion and lookup
so that means hash function if of (logn)

one strange thing -> for a non existing key the default value is set to 0
that's why we use count method
*/
int main(){
    // map<int, int> dict;
    map<string, int> dict;
    dict["a"] = 10;
    dict["b"] = 15;
    dict["c"] = 5;

    cout << dict["c"] << endl; 

    // iterate throught all 
    for (auto it = dict.begin(); it!=dict.end(); it++){
        // map stores item in a key value pair
        cout << (*it).first << " " << (*it).second << endl;
    }
    
    cout << dict["z"] << endl;
    if (dict.count("z")){
        cout << "present";
    }
    else{
        cout << "absent";
    }
    return 0;
}