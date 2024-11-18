#include <iostream>
using namespace std;


int main(){
    char c='a';
    cout << "your charecter is: " << c << endl;
    
    int x = c;
    cout << "the ascii of your charecter is: " << x << endl;
    cout << "or the ascii is: " << (int)c << endl;// type casting
    
    //number to chaar
    cout << "number to charected: " << (char)97<<endl;
    return 0;
}