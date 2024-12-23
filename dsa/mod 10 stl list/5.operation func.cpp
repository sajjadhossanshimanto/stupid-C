#include <bits/stdc++.h>
using namespace std;


void print_list(list<int> l){
    for (auto i: l){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    list<int> l = {10, 20, 30, 40, 10, 10, 20};
    print_list(l);

    // remove all occurance of that element
    l.remove(10);
    print_list(l);

    // sorting
    // sort(l.begin(), l.end());// doesn't work for list
    l.sort(greater<int>());
    print_list(l);

    // onl works eith dorted list
    l.unique();// removes all dublicate accurance
    print_list(l);

    l.reverse();
    print_list(l);

    return 0;
}