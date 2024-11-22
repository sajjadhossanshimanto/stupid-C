#include <bits/stdc++.h>
using namespace std;



void input_arr(int n, int arr[]){
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
}

string permute(int n, int s, int arr[]){
    for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                for (int k = j+1; k<n; k++){
                    if ((long long int)arr[i]+arr[j]+arr[k]==s){
                        return "YES";
                    }
                }
            }
        }
    return "NO";
}

int main()
{
    int t;
    cin >> t;

    while (t){
        int s, n;
        cin >> n >> s;

        int arr[n];
        input_arr(n, arr);
        
        cout << permute(n, s, arr) << endl;


        t--;
    }

    return 0;
}
