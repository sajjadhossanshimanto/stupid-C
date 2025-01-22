/*
we need to maintain 2 condition
1. has tobe a complete binary tree
    - so insert at the last available pos
2. parent is always greater than child
    - keep compearing the inserted value with parents 
    - is parent is less. then swap their position
*/

/*
10
23 15 21 13 9 19 8 2 4 7
*/

#include <bits/stdc++.h>
using namespace std;


void heap_push(vector<int> *v, int val){
    v->push_back(val);
    int child = v->size() - 1;
    int parent = (child-1)/2;
    while ((*v)[parent]<(*v)[child]){
        swap((*v)[parent], (*v)[child]);
        child = parent;
        parent = (child-1)/2;
    }
}

void print_vec(vector<int> v){
    for (auto i: v){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v;

    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    heap_push(&v, 18);// 23 18 ...
    print_vec(v);
    
    return 0;
}
/*
complexity:
at max the loop in insertion occures height of tree times
tc -> O(h)  but
here tree is always a complete tree. so h is always log(n)
tc -> O(logn) for a single value

for n nodes insertion -> Nlon(n)

insertion in heap is actually very bad as in array or vector insertion of a single value is O(1)
but heap has its own best use case.
*/