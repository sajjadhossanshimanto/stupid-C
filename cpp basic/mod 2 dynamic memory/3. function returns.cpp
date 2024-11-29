# include <bits/stdc++.h>
using namespace std;


int func(){
    int x = 10;
    return x;
}


int* func_dy(){
    int *p = new int;
    *p = 60;
    return p;// returning address
}

int main(){
    // may wordk in windowds. but may not be working in otger distribution
    int y = func();
    cout << y << endl;

    int *z = func_dy();
    cout << *z << endl;
    
    return 0;
}