#include <bits/stdc++.h>
using namespace std;


class Egypt{
    public:
    int e=0;
    int g=0;
    int y=0;
    int p=0;
    int t=0;
};

int main(){
    Egypt counter;
    string word;

    getline(cin, word);
    for (char c: word){
        if (c=='e' || c=='E'){
            counter.e += 1;
        }
        else if (c=='g' || c=='G'){
            counter.g += 1;
        }
        else if (c=='y' || c=='Y'){
            counter.y += 1;
        }
        else if (c=='p' || c=='P'){
            counter.p += 1;
        }
        else if (c=='t' || c=='T'){
            counter.t += 1;
        }
    }

    cout << min({counter.e, counter.g, counter.y, counter.p, counter.t}) << endl;

    return 0;
}