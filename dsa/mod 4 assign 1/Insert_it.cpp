#include <bits/stdc++.h>
using namespace std;



int main()
{
    vector<int> va, vb;
    int n, temp;
    
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> temp;
        va.push_back(temp);
    }

    cin >> n;
    for (int i=0; i<n; i++){
        cin >> temp;
        vb.push_back(temp);
    }

    int x;
    cin>>x;

    va.insert(va.begin()+x, vb.begin(), vb.end());

    for(auto i:va){
        cout<<i << " ";
    }

    return 0;
}
