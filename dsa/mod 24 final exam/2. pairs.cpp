#include <bits/stdc++.h>
using namespace std;

class Data{
    public:
        string name;
        int serial;

        // Data(string name, int serial){
        //     this->name = name;
        //     this->serial = serial;
        // }
};

class cmp{
    public:
    bool operator()(Data l, Data r){
        if (l.name==r.name){
            return l.serial < r.serial;
        }
        return l.name > r.name;
    }
};

int main(){
    int n;
    cin >> n;

    priority_queue<Data, vector<Data>, cmp> pq;
    while(n--){
        Data person;
        cin >> person.name >> person.serial;
        pq.push(person);
    }
    

    while(!pq.empty()){
        cout << pq.top().name << " " << pq.top().serial << endl;
        pq.pop();
    }

    return 0;
}