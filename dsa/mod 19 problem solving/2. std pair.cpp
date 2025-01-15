#include <bits/stdc++.h>
using namespace std;


int main(){
    //  any 2 type is ok
    pair<string, int> p1, p2;
    p1 = make_pair("hello", 3);

    cout << p1.first << endl;
    cout << p1.second << endl;
    // kind of one single entry of python dictionary
    // and pair of array would represent -> dict


    p2 = {"hi", 2};
    cout << p2.first << endl;
    cout << p2.second << endl;


    // input output
    /*
5
1 2
3 4
5 6
7 8
9 0
    */
    vector<pair<int, int>> p;
    int x;
    cin >> x;

    for (int i=0; i<x; i++){
        int a, b;
        cin >> a >> b;
        
        p.push_back( make_pair(a, b));
    }

    cout << endl;
    for (int i=0; i<x; i++){        
        cout << p[i].first << " " << p[i].second << endl;
    }

    return 0;
}