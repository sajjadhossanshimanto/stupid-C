#include <iostream>

using namespace std;


int main(){
    int x;
    cin >> x;

    switch (x){
        case 1:
            cout << "saterday";
            break;
        
        case 2:
            cout << "sunday";
            break;
        
        case 3:
            cout << "monday";
            break;
        
        case 4:
            cout << "tuesday";
            break;
        
        case 5:
            cout << "wednesday";
            break;
        
        case 6:
            cout << "thusday";
            break;
        
        case 7:
            cout << "friday";
            break;
        
        default:
            cout << "date must be in between 1-7";
    }
    return 0;
}