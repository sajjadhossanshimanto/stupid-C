#include <bits/stdc++.h>
using namespace std;


/*
properties of set :
- dublicate values are not allowed
- keeps items in a sorted oder
set works by BST

one info -> if we perform `in oder traversal` in bst we will get a perfect sorted list


tc:
operations in set is logn
set achives this by maintaining a balanced binary tree
*/

int main(){
    set<int> s;
    s.insert(2);
    s.insert(5);
    s.insert(3);
    s.insert(7);
    s.insert(1);

    // reverse(s.begin(), s.begin())// set can't be reversed in this way
    for (auto it=s.begin(); it!=s.end(); it++){
        cout << *it << endl;
    }
    
    if (!s.count(4)){
        cout << "4 is absent" << endl;
    }
    s.insert(1);
    s.insert(1);
    cout << s.count(1) ;

    return 0;
}