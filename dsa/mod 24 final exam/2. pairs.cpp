#include <bits/stdc++.h>
using namespace std;

class Data{
    public:
        string name;
        int serial;
};

bool cmp(Data l, Data r){
    if (l.name==r.name){
        return l.serial > r.serial;
    }
    return l.name < r.name;
}

int main(){
    int n;
    cin >> n;
    Data all_pair[n];

    // input
    for (int i=0; i<n; i++){
        cin >> all_pair[i].name >> all_pair[i].serial;
    }
    
    sort(all_pair, all_pair+n, cmp);

    for (int i=0; i<n; i++){
        cout << all_pair[i].name << ' ' << all_pair[i].serial << endl;
    }


    return 0;
}