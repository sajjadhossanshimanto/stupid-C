#include <bits/stdc++.h>
using namespace std;


void input_list(list<int> l1){
    int x;
    while (true){
        cin >> x;
        if (x==-1) return;

        l1.push_back(x);
    }
}

bool is_equal(list<int> list1, list<int> list2){
    auto l1 = list1.begin();
    auto l2 = list2.begin();
    while (l1!=list1.end() && l2!=list2.end()){
        // if (*l1!=*l2) return false;
        cout << *l1 << endl;
        l1 = next(l1, 1);
        l2 = next(l2, 1);
    }
    return true;
}

int main(){
    list<int> list1;
    list<int> list2;

    input_list(list1);
    input_list(list2);

    cout << is_equal(list1, list2);
    
    return 0;
}