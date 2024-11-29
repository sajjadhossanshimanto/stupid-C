#include <bits/stdc++.h>
using namespace std;

class Crickter{
    public:
    string country;
    int jurchy;

    Crickter(string country,int jurchy){
        this->country = country;
        this->jurchy = jurchy;
    }
};

int main(){
    Crickter *dhoni = new Crickter("india", 18);
    Crickter *temp = new Crickter("india", 100);

    // // 1st -> assignment each attribute manually
    // temp.country = dhoni.country;
    // temp.jurchy = dhoni.jurchy;

    // 2nd -> 
    *temp = *dhoni;

    delete dhoni;
    cout << temp->jurchy << endl;
    
    return 0;
}