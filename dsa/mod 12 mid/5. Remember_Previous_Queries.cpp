#include <bits/stdc++.h>
using namespace std;



void print_forward(list<int> l){
    cout << "L -> ";
    if (!l.empty()){
        for (auto i: l){
            cout << i << " ";
        }
    }
    cout << endl;
}

void print_backward(list<int> l){
    cout << "R -> ";
    if (!l.empty()){
        for (auto i = l.rbegin(); i!=l.rend(); i++){
            cout << *i << " ";
        }
    }
    cout << endl;
}
int main(){
    list<int> linked;

    int q;
    cin >> q;

    int cmd, val;
    while (q--){
        cin >> cmd >> val;

        if (cmd==0){
            linked.push_front(val);
        }
        else if (cmd==1){
            linked.push_back(val);
        }
        else{
            if (val<linked.size()){
                linked.erase(next(linked.begin(), val));
            }
        }

        print_forward(linked);
        print_backward(linked);
    }

    return 0;
}