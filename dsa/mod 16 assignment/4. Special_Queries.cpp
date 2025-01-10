#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;

    queue<string> q;
    while(n--){
        int op;
        string name;

        cin >> op;
        if (op==0){
            cin >> name;
            q.push(name);
        }
        else{
            if (q.empty()){
                cout << "Invalid" <<endl;
            }
            else{
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    
    return 0;
}