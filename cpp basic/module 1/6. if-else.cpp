#include <iostream>

using namespace std;

// same to same as `c`
int main(){
    int x=5;

    if (x%2==1){
        cout << "odd" << endl;
    } else{
        cout << "even" << endl;
    }

    // tarnary -> (condition) ? True : False
    x%2==1 ? cout << "odd": cout << "even" << endl;
    
    return 0;
}