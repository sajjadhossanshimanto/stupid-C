#include <bits/stdc++.h>
using namespace std;


void repeat_print(char c, int count){
    for (int j=0; j<count; j++){
        cout << c;
    }
}

int main()
{
    int n;
    cin >> n;

    // upper half
    for (int i=0; i<n/2; i++){
        repeat_print(' ', i);
        cout << "\\";
        repeat_print(' ', (n/2-i)*2-1);
        cout << "/";

        cout << endl;
    }

    // x
    repeat_print(' ', n/2);
    cout << 'X'<<endl;

    //lower
    for (int i=n/2-1; i>=0; i--){
        repeat_print(' ', i);
        cout << "/";
        repeat_print(' ', (n/2-i)*2-1);
        cout << "\\";

        cout << endl;
    }

    return 0;
}
