#include <iostream>

using namespace std;


//fgets aldo works in cpp
int main(){
    int x;
    cin >> x;
    cin.ignore();// to avoid interaction between cin and getline

    char s[100];
    // get input with space
    cin.getline(s, 100);

    cout << s << endl;
    
    return 0;
}