#include <bits/stdc++.h>
using namespace std;


void print_list(list<int> l){
    for (auto i = l.begin(); i!=l.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
}

int main(){
    list<int> l(5, -1);
    print_list(l);
    
    return 0;
}