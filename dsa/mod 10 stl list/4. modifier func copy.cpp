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

    // back operation
    l.push_back(500);
    print_list(l);
    l.pop_back();

    // font operation
    l.push_front(0);
    print_list(l);
    l.pop_front();


    // access element at index
    print_list(l);
    cout << *next(l.begin(), 2) << endl;
    
    // insert -> single value
    l.insert(next(l.begin(), 2), -1);// O(N)
    print_list(l);

    // inseert series of data
    vector<int> arr = {-2,-3, -4};
    l.insert(next(l.begin(), 3), arr.begin(), arr.end());
    print_list(l);


    // erase -> single value
    l.erase(next(l.begin(), 2));
    print_list(l);

    // erase -> multiple value
    l.erase(next(l.begin(), 2), next(l.begin(), 4)); // end point exclusive
    print_list(l);


    // replace 
    replace(l.begin(), l.end(), -4, 0);
    print_list(l);

    auto it = find(l.begin(), l.end(), 0);
    if (it==l.end()){
        cout << "Zero not found" << endl;
    }
    else{
        cout << "Zero exists in the list" << endl;
    }

    return 0;
}