#include <iostream>
#include <iomanip>// input output manupolation

using namespace std;

// eqivalent to format spacifier "%.2f"
int main(){
    float r = 3.141516;

    cout << fixed << setprecision(3) << r << endl;//round function

    return 0;
}