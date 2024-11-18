#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int a, b;

    cin >> a >> b;

    cout << min(a, b) << endl;
    //multiple inputs
    cout << max({1, 2, 3, 4, 5, 6}) << endl;

    swap(a, b);
    cout << "swaped a, b " << a << b;
    return 0;
}