#include <bits/stdc++.h>
using namespace std;


void print_list(list<int> l){
    for (auto i: l){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    list<int> l = {10, 20, 30, 40};
    print_list(l);


    // resize -> decrease.
    l.resize(2);// drop values.
    print_list(l);

    // resize -> increase.
    l.resize(5);// extra vaules set to 0
    print_list(l);

    l.resize(7, 100);
    print_list(l);// define default value

    
    l.clear();//O(N) -> clears the list

    if (l.empty()){// return bool
        cout << "list is empty" << endl;
        cout << "size: "<< l.size()<< endl;// size of list
    }
    

    return 0;
}