#include <bits/stdc++.h>
using namespace std;


long long int height[100005];

int main(){
    long long int t;
    cin >> t;

    while (t--){
        long long int n;
        cin >> n;

        for (long long int i=0; i<n; i++){
            cin >> height[i];
        }

        long long int l = 0;
        long long int r = n-1;
        long long int max_water = 0;
        long long int best_pair[2] = {l, r};

        while (l < r){
            long long int area = min(height[l], height[r]);

            if (area > max_water){
                max_water = area;
                best_pair[0] = l;
                best_pair[1] = r;
            }

            if (height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }

        cout << best_pair[0] << " " << best_pair[1] << endl;


    }
    
    return 0;
}